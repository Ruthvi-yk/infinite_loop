#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(5,7); 

int smoke = A0;

int sensorThreshold = 500;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);  
  pinMode(smoke, INPUT);
  Serial.begin(9600);

  String Name = String("AT+NAME=MyBluetooth\r\n"); 
  Serial.begin(9600);
  Bluetooth.begin(38400);
  Bluetooth.print("AT\r\n"); 
  delay(500);
  while (Bluetooth.available()) {
    Serial.write(Bluetooth.read());
    Bluetooth.print(Name); 
    delay(500);
    while (Bluetooth.available()) {
      Serial.write(Bluetooth.read());
    }
  }
}

void loop() {
  int Sensor = analogRead(smoke);
  Serial.print("Pin A0: "); 
  Serial.println(Sensor);
  if(Sensor>sensorThreshold)
  {
    digitalWrite(6, LOW);
    digitalWrite(3, HIGH);    
  }
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(6, HIGH);
  }
  delay(1000);
}
 

