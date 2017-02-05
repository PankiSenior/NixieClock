# include <avr/io.h>
//Test comment - Hello GitHub!
byte b;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
DDRD = B00111100;
}


void loop() {
 // put your main code here, to run repeatedly:
 digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
 b=4;
 PORTD = 4;//B00000100;
 delay(1000);                       // wait for a second
 
 digitalWrite(13, LOW);             // turn the LED off by making the voltage LOW
 PORTD = B00000000;    
 delay(1000);                       // wait for a second
}
