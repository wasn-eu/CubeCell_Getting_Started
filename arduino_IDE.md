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
 
## Using the GitHub Version

This is maybe not the correct way but it works.

Install the latest version with the board manager (see above).

Go to

	C:\Users\USERNAME\AppData\Local\arduino15\packages\CubeCell\hardware\CubeCell

Delete the directory 

	0.0.3	
Open the git bash there:

	git clone  https://github.com/HelTecAutomation/ASR650x-Arduino.git 0.0.3
Go to

	C:\Users\USERNAME\AppData\Local\arduino15\packages\CubeCell\hardware\CubeCell\0.0.3\tools
Run

	get.exe

Now you have the most recent version installed.

To Update it, go to:

	C:\Users\USERNAME\AppData\Local\arduino15\packages\CubeCell\hardware\CubeCell\0.0.3
and open git bash here:

	git pull origin master
Go to

	C:\Users\USERNAME\AppData\Local\arduino15\packages\CubeCell\hardware\CubeCell\0.0.3\tools
Run

	get.exe

## Loading Firmware
Select the example: 

	File -> examples -> LoRa -> LoRaWan_Sensors -> LoRaWan_Multisensor

![Example](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Example_new.PNG)
 
If you would like to use the latest version of this sketch you can download it here (LoRaWan_MultiSensor directory).

This sketch allows you to use a number of sensors. All you have to do is to set the number to a 1 beside the sensor you would like to use 
(only 1 selection is possible, selecting more will result in errors).

Selecting AUTO_SCAN the Firmware will try to identify the connected I2C Sensor by its address. AUTO_SCAN takes its time, it is not very battery friendly. 
Please select the sensor for saving battery power, 
for maximum flexibility choose AUTO_SCAN.

	#define AUTO_SCAN  1
	#define MJMCU_8128 0
	#define BME_680    0 
	#define BME_280    0
	#define CCS_811    0
	#define BMP_180    0
	#define HDC_1080   0
	#define BH_1750    0
	#define One_Wire   0 // sensors not found

Login to TTN and create a new device. Get your keys from TTN and set them in the Sketch:

    const char myDevEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; 
    const char myAppEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    const char myAppKey[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0

Set the DutyCycle in ms:

	uint32_t APP_TX_DUTYCYCLE = 900000; // in ms

If you don't like to set your keys and DutyCycle in the sketch just leave them as they are and use the CubeCell Configurator (see the this [guide](https://github.com/raystream/CubeCell_Getting_Started/blob/master/README.md)).

## Arduino IDE compile settings
Select the board you have connected and the serial port: 

	e.g. CubeCell-Board, CubeCell-Module, CubeCell-Cupsule, COM-Port

Select your all LoRa specific settings:
- Region: REGION_EU868 (select the region you are in)
- Class: CLASS_A
- Netmode: OTAA 
- ADR: ON
- Net_Reservation: ON
- AT_SUPPORT: ON (need to be ON to use the CubeCell Configurator, OFF for saving power but you must set the keys in the sketch)
- RGB: ACTIVE (for status display with the RGB led, select DEACTIVE for saving power)

![LoRa Settings](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/LoRa_Settings.PNG)
 
Compile and upload it
 
![Compile](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Compile.PNG)
