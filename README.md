# CubeCell Getting Started Guide
# with LoRaWan_MultiSensor example
# (c) by WASN.eu 

## Setup of development Environment
### Download and Install Arduino IDE
Download and install the Arduino IDE from:

	https://www.arduino.cc/en/Main/Software
### Configure the Arduino IDE
Open Arduino IDE

click File->Peferences->Settings

![Settings](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Settings.PNG)
![Settings](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Settings_02.PNG)
![Boards](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Boards.PNG)
 
Input last ASR650x board manager URL:

	https://docs.heltec.cn/download/package_CubeCell_index.json
or

	http://119.23.153.38/download/package_CubeCell_index.json

Click Tools->Board:->Boards Manager...

![Board Manager](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/BoardManager.PNG)

search Heltec cubecell in the new pop-up dialog

select the latest releases and click install
 
The source code of Heltec ASR650x series (ASR6501&ASR6502) framework is also available here: 

	https://github.com/HelTecAutomation/ASR650x-Arduino

## Loading Firmware
Select the example: 

	File -> examples -> LoRa -> LoRaWan_Sensors -> LoRaWan_Multisensor

![Example](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Example.PNG)
 
If you would like to use the latest version of this sketch you can download it here (LoRaWan_MultiSensor directory).

This sketch allows you to use a number of sensors. All you have to do is to set the number to a 1 beside the sensor you would like to use 
(only 1 selection is possible, selecting more will result in errors).

Selecting AUTO_SCAN the Firmware will try to identify the connected I2C Sensor by its address. AUTO_SCAN takes its time, it is not very battery friendly. 
Please select the sensor for saving battery power, 
for maximum flexibility choose AUTO_SCAN.

	#define AUTO_SCAN  1
	#define MJMCU_8128 0
	#define BME_680    0 // wrong values
	#define BME_280    0
	#define CCS_811    0
	#define BMP_180    0 // not tested
	#define HDC_1080   0
	#define BH_1750    0
	#define One_Wire   0 // sensors not found

Login to TTN and create a new device. Get your keys from TTN and set them in the Sketch:

    const char myDevEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; 
    const char myAppEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    const char myAppKey[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0

If you don't like to set your keys in the sketch just leave them as they are and use the CubeCell Configurator (see the end of this guide).

## Arduino IDE compile settings
Correct select the board you had connected to computer and the specified serial port: 

	e.g. CubeCell-Board, CubeCell-Module, CubeCell-Cupsule, COM-Port

![LoRa Settings](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/LoRa_Settings.PNG)
 
Compile and upload it
 
![Compile](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Compile.PNG)

# The Things Network decoder
Login to TTN and define the decoder. 
The decoder is found in the TTN-Decoder directory.

# CubeCell Configurator

- Select your COM Port and click connect.
- Type in your Keys
- Click on Write

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

Now the keys are set and the CubeCell device will reboot.
