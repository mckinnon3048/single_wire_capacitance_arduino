#include <SoftwareSerial.h>

//The LED code:
int inPin = A5;             // analog pin5 (1M Ohm resistor to ground)
int sensorVal = 0;          // stores 10bit voltage 0(0v)-1023(5v)
bool ledToggle = false;     // bool to carry the current state of the led
int pin10 = 10;         // output led, pin 10 (470ohm resistor and led to ground)

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pin10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 sensorVal = analogRead(inPin);               
 Serial.println(val);//assigns them to val
  if(sensorVal >=5){
    ledToggle = !ledToggle;
  }
  if(ledToggle){
   digitalWrite(pin10, HIGH);
  }else{
    digitalWrite(pin10, LOW);
  }
  if(sensorVal >=5){
    delay(2000);
  }else{
    delay(50);
  }

}
