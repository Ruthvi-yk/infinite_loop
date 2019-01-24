#include<SoftwareSerial.h>
SoftwareSerial BTSerial(5,6);//RX|TX
//int sensorThres = 20;
//
int smokeA0= A0;
void setup() {
  //pinMode(3, OUTPUT);
  //pinMode(6, OUTPUT);  
  //pinMode(smokeA0, INPUT);
  Serial.begin(9600);
  Serial.println("AT Commands");
  BTSerial.begin(38400);
}

void loop() {
  //int analogSensor = analogRead(smokeA0);
  //Serial.print("Pin A0: "); 
  //erial.println(analogSensor);
  if(BTSerial.available())
    Serial.write(BTSerial.read());
  if(Serial.available())
    BTSerial.write(Serial.read()); 
  // Checks if it has reached the threshold value
  /*if(analogSensor>sensorThres)
  {
    digitalWrite(3, LOW);
    digitalWrite(6, HIGH);    
    //BT.println("Hi");
  }
  else
  {
    digitalWrite(6, LOW);
    digitalWrite(3, HIGH);
    //BT.println("Hi");
  }
  delay(1000);*/
}
