# infinite_loop
Smoke detection

PROTOTYPE DESCRIPTION:
A smoke detector is a device that senses smoke, typically as an indicator of fire. Our version of a smoke detector is more personalized wherein the sensor might be placed at any place, supposedly the kitchen and we will get an alert on our phone when smoke will be detected. To develop this Smoke detector the entire operation has been divided into the following step in our project:
1. Hardware assembling
2. Software coding
It is designed in such a way that the sensor analog output voltage is read and when the smoke reaches a certain level, it will make sound a buzzer and a red LED will turn on. When the output voltage is below that level, a green LED will be on. We will be creating an app that would alert the user about the smoke detection.
WORKING OF THE SENSOR:
•	Determination of threshold value of the sensor: The threshold value is set by taking the gas concentration and the distance as parameters. The voltage change can be observed on the serial monitor.
•	Comparing the voltage and gas concentration: The voltage that the sensor outputs changes accordingly to the smoke/gas level that exists in the atmosphere. The sensor outputs a voltage that is proportional to the concentration of smoke/gas.
In other words, the relationship between voltage and gas concentration is the following: The greater the gas concentration, the greater the output voltage, the lower the gas concentration, the lower the output voltage. The sensor analog output voltage and when the smoke reaches a certain level, green LED will turn on. When the output voltage is below that level, a blue LED will be on.
CONNECTING TO PHONE: As of now our range of the sensors are limited and we are using Bluetooth to connect to the phone. An apk file is written and imported to the phone and a Bluetooth adaptor is used to make the connection to the Arduino board to which the sensor is attached. The app will be using the onboard Bluetooth adapter, therefore it will be mentioned in the Manifest. The data is carried by passing an Intent. The manifest will be an xml file in its root directory. The manifest file presents essential information about the app to the Android system, information the system must have before it can run any app’s code. 

REQUIREMENT SPECIFICATIONS:
Details of Software
•	OPERATING SYSTEM : Windows 7 or greater
•	Android Studio 
System Requirements
•	PROCESSOR : Pentium IV processor 2GHz or greater
•	RAM:1GB or greater
•	HARDDISK:64 GB or greater

USE CASES:
The system the team proposes is a dynamic one as the sensor is sensitive to smoke and to the following flammable gases: LPG, Butane, Propane, Methane, Alcohol, Hydrogen. The smoke sensor has a built-in potentiometer that allows you to adjust the sensor sensitivity according to how accurate you want to detect gas. In case of an emergency the smart phone holders and the relevant emergency departments are alerted.
DEPENDENCIES
•	The initial prototype is using a weak smoke sensor. However, in view of importance of a smoke detector and the possibility of fire, a strong sensor has to be used eventually for commercial purposes.
•	The use of Bluetooth restricts the range to a large extent. Particle cloud is a solution which allows to connect Rasberry Pi to their cloud service. Rasberry Pi can be used to make the smoke detector more efficient in commercial buildings and residential apartments that  can perform multiple tasks.

