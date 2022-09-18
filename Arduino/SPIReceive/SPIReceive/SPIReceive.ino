#include <SPI.h>

bool flag = 0;
byte s_recv;


void setup(void) {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MISO, OUTPUT);

  SPCR = (1<< SPE)|(1<< SPIE);
  sei();
}

ISR(SPI_STC_vect) { 
  s_recv = SPDR;
  flag = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(s_recv);
  delay(500);
  if(flag)
  {
    SPDR = 'F';
  }
}
