# <img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/wasn_logo.png" width=150> ModularNode & IndoorNode
# <img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/HelTec.png" width=70> <img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/cubecell.png" width=70> Getting Started Guide
# (c) by <img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/wasn_logo.png" width=70>


[Connecting the Indoor/ModularNode or a Cubell to your computer](#connecting-the-indoor/modularnode-or-cubecell-to-your-computer)  
[Choosing the right firmware version](#choosing-the-right-firmware-version)    
[Use CubeCell Configurator to upload firmware](#use-cubecell-configurator-to-upload-firmware)  
[Use CubeCell Configurator for configuration](#use-cubecell-configurator-for-configuration)  
[Use the CubeCell Database](#use-the-cubecell-database)  
[The Things Network decoder](#the-things-network-decoder)  
[ChirpStack decoder](#chirpstack-decoder)  
[Connecting a sensor](#connecting-a-sensor)  
[Connecting an external Trigger](#connecting-an-external-trigger)  
[Connecting a battery to the CubeCell Capsule](#connecting-a-battery-to-the-cubecell-capsule)  
[RGB LED](#rgb-led)  
[Known AT Commands](#known-at-commands)


**You need to use Configurator version 5.0 or above, all older version will not work anymore.**


## Connecting the Indoor/ModularNode or CubeCell to your Computer

- connect the USB board to the capsule  
<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/USB_board.jpg" width=500>  
</p>

- the white dot on the USB board must align with the white dot on the capsule (beside the Reset button)  
<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Capsule_wo_Sensor.jpg" width=500>   
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Capsule_and_USB.jpg" width=500>    
</p>

- connect the micro USB of the USB board to your computer  

If you have a IndoorNode or CubeCell board just connect the micro USB to your computer.

If you have a ModularNode connect the supplied USB cable to your computer.

The drivers for the Silabs CP210x USB to serial adapter should be installed automatically via windows update. If not you can download it [here](https://www.silabs.com/documents/public/software/CP210x_Universal_Windows_Driver.zip).

## Choosing the right firmware version

Before flashing the firmware you have to choose the firmware type.
You have to choose between IndoorNode, ModularNode, Board, Capsule, TCA9548A.

Here is a comparison of these types:

| Type        | IIC | OneWire* | TCA9548A | Sensor Auto Scan         | Interrupt | Serial             | Comments                     |
|-------------|-----|----------|----------|--------------------------|-----------|--------------------|------------------------------|
| Board       |  X  |  GPIO1   |          | all sensors listet below |   GPIO2   | GPIO3 TX, GPIO5 RX |                              |
| Capsule     |  X  |          |          | all sensors listet below |   GPIO2   | GPIO3 TX, GPIO5 RX |                              |
| TCA9548A    |  X  |  GPIO1   |     X    | all sensors listet below |   GPIO2   | GPIO3 TX, GPIO5 RX |                              |
| IndoorNode  |  X  |          |          | only BME280/BME680       |     X     |                    | special for WASN IndoorNode  |
| ModularNode |  X  |    X     |     X    | all sensors listet below |     X     |         X          | special for WASN ModularNode |
| Mapper      |     |          |          |                          |           |                    | special for WASN Mapper      |

\* OneWire is disabled for all types in MK3 firmware because of stability issues  

These sensors are supported on IIC interface:

- ADS1015/ADS1115
- BH1750   
- BME680 
- BME280 
- BMP280
- CCS811   
- HDC1080
- HMC5883L
- MPU9250
- SHT2x
- SHT31
- VL53L1X
- Adafruit STEMMA Soil Sensor 

These sensors are supported on OneWire interface:

- DallasTemperature DS18B...

These sensors are supported on Serial interface:

- GPS with 9600baud

## Use CubeCell Configurator to upload firmware

The easy way to get the Capsule up and running is:

- Download the CubeCell Configurator from here [download](https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/Configurator/CubeCellConfigurator.exe).  
- Open the CubeCell Configurator
  - Select the Flash Tab
<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Configurator_flash.PNG" width=750>  
</p>

  - just skip the next 3 steps to download the firmware from the online catalog
    - click Check to see what version is online and what version in in your offline catalog
    - click Update to update the offline catalog with the newest online version
    - to use the offline catalog activate the checkbox "use FW catalog"
  - Select the right COM port (if you would like to preserve configuration click Connect, else not)
  	- Select the Node Type (Board, Capsule, TCA9548A, IndoorNode, ModularNode, Mapper)
  	- Select the right frequency band (EU868, US915, AU915, IN865)
  	- Select RGB LED Status (on, off)
  	- click Flash Firmware
<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Configurator_flash_2.PNG" width=750>  
</p>

 - If you have clicked on connect in the first step, you will see a checkbox with the option to preserve configuration, else this checkbox is not shown
   - Click on Flash Firmware to start the process
   - Firmware is now downloaded from github.
   - The firmware will be written to the CubeCell 
   - If you have selected to preserve configuration, the configuration is saved to the CubeCell
   - The debug text box shows the state of the firmware download and flash.
 - If an error happens this will be in the debug text box too.
        
              Downloading Firmware …
              Downloading Firmware done
              Flashing Firmware …
              PROCESS PERCENTAGE
              Flashing Firmware done
              CleanUp Starting
              CleanUp done
        

The firmware has the following config:

- REGION: (selectable)
  - EU868
  - US915
  - AU915
  - IN865
- CLASS_A
- OTAA
- ADR: ON
- Net_Reservation: OFF
- AT_SUPPORT: ON
- RGB: (selectable)
  - ACTIVE
  - DEACTIVE
- unconfirmed uplink
- All Keys set to zero

The firmware auto detects the connected I2C sensor.  
You can connect more than one sensor to the I2C bus.  
The only limitation is, that you can connect only 1 sensor of each modell on each sensor socket. 

If you have a TCA9548A I2C Switch conncted to the I2C Bus, Vext and GND you can connect up to 8 sensors of each model to each switch output. 
You need to flash the TCA9548A firmware to activate the use of the TCA9548A I2C switch.

**The IndoorNode and ModularNode Firmware is only for our Nodes. This Firmwares will not work on other hardware.**

OneWire Sensors will be supported on GPIO1. Right now the CubeCell hangs sometimes with activated OneWire.  
Serial GPS modules are supported, connect GPIO3 TX and GPIO5 RX. 

## Use CubeCell Configurator for configuration

- Login to TTN and create an application if you haven’t already. 
- Under your application create a device for the CubeCell you are setting up
- Open the CubeCell Configurator

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Configurator.PNG" width=750>  
</p>

  - Select your COM Port and click connect.
  - Select the Config Tab
  	- all EUIs, Keys, \auth type and DutyCycle are read from the CubeCell.
	- Choose the authentification type (OTAA is default).
  	- copy the keys: 
	  - for OTAA auth: Device EUI, Application EUI and App Key
	  - for ABP auth: Device EUI, Application EU, Device Address, Network Session Key and App Session Key
    - Please note that you should copy and paste only one key at a time. On TTN you will notice that there is a Copy icon at the end of each key field. Then back in the Configurator screen just paste each value you copied from the TTN device screen
	- Set a Dutycycle (Sleeptime between 2 sends).
    - by default all uplinks are unconfirmed, if you need confirmed uplinks please enable the TX confirmed checkbox
  	- Click on Write.
    - to save the data to the database click on Save to DB in the Database area.
    - to read data from the database referencing the ChipID click on Read from DB.
  - The keys will be saved in the CubeCell device and the device will reboot
  - In the debug text box you should see the following:

        AT+DevEui=YOURDEVEUI
        AT+AppEui=YOURAPPEUI
        AT+AppKey=YOURAPPKEY
        AT+DutyCycle=YOURDUTYCYCLEINMS
        AT+RESET=1
        ...
        ...
        joining...
        joined
	
  - Now you should see the Join Requests in your TTN Application and short after that data comming in.
  - You can send AT commands to the Cubecell:
    - type your command in the first field of the AT Commands group
    - type the value in the sexond field of the AT Commands group
    - hit Send

## Use the CubeCell Database

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Configurator_database.PNG" width=750>  
</p>

Search for the dataset you would like to use for the connected CubeCell and click on use.
The data can than be written to the CubeCell by clicking on write in the config tab.

## The Things Network decoder

- Login to TTN and go to your application you have previously defined the device in.
- Now you can define the decoder for this application.  
- The decoder can be downloaded from here [download](https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/Decoder/ttn-decode.js).

## ChirpStack decoder

- Login to your ChirpStack server and go to your device profil.
- Now you can define the decoder for this device profil under the codec tab.  
- The decoder can be downloaded from here [download](https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/Decoder/chirpstack-decode.js).

## Connecting a sensor

If you have bought the IndoorNode ([buy](https://www.wasn.eu/p/wasn-indoor-node-mit-cjmcu-8128-sensor)) there is a BME280 or BME680 sensor fitted in the case.

If you have bought the ModularNode ([buy](https://www.wasn.eu/p/wasn-modular-outdoor-node)) you can connect the sensor to one of the 3 sockets.

If you have bought a sensor from our Website ([buy](https://www.wasn.eu/c/sensoren)) or from Heltec then you can just plug it in the capsule.

If not here is the pinout for connecting your sensor:

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Capsule_and_Sensor.jpg" width=500>  
</p>

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Capsule_PinOut.PNG" width=500>  
</p>

- Vext is used for powering the sensors. This pin only delivers power to the sensor when taking the measurement.
- use VS and GND to connect a solar panel (5.5 - 7V).

You can connect more than one sensor to the I2C bus.  
The only limitation is, that you can connect only 1 sensor of each modell on each sensor socket.  

If you have a TCA9548A I2C Switch conncted to the I2C Bus, Vext and GND you can connect up to 8 sensors of each model to each switch output. 
You need to flash the ModularNode firmware to activate the use of the TCA9548A I2C switch.

OneWire Sensors will be supported on GPIO1. Right now the CubeCell hangs sometimes with activated OneWire.

You can check which sensor the CubeCell device has found:

- Open the CubeCell Configurator

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Configurator_sensors.PNG" width=750>  
</p>

  - Select your COM Port and click connect.
  - Go to the sensors tab
   - click on search

         Port 0
           Found BME680
         Port 1
           Found MPU9250
         ...

## Connecting an external trigger

You can trigger sending a package with an external switch.

Just connect a normally open switch to the GPIO pin mentioned in the table at the beginning og this guide and 3.3V.

If the switch is now closed, all sensor data is send.

To see if the trigger for sending a package was the timer or the external trigger there is the variable trigger in the decoder.
If this variable is 1 then sending was triggerd by timer, if the variable i 0 then sending was triggert from the external trigger. 

## Connecting a battery to the CubeCell Capsule

This battery fits nicely in the capsule ([buy](https://www.wasn.eu/p/akku-100mah-fuer-capsule))

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Battery.PNG" width=500>  
</p>

If you have bought the Capsule from us ([buy](https://www.wasn.eu/p/cubecell-capsule)) there is a battery connector installed.

<p align="center">
<img src="https://github.com/wasn-eu/CubeCell_Getting_Started/raw/master/images/Capsule_Battery_Connector.png" width=500>  
</p>

## RGB LED

 * RGB red means sending;
 * RGB purple means joined done;
 * RGB blue means RxWindow1;
 * RGB yellow means RxWindow2;
 * RGB green means received done;

## Known AT Commands

This are the common AT commands.
A full list can be found in this [PDF](https://github.com/wasn-eu/CubeCell_Getting_Started/blob/master/Manuals/CubeCell_Series_AT_Command_User_Manual_V0.2.pdf)

| AT Command           | Value                                                             |
|----------------------|-------------------------------------------------------------------|
| +ADR=?               | on 1, off 0                                                       |
| +AppEui=?            | Unique (OTAA Mode)                                                |
| +AppKey=?            | Unique (OTAA Mode)                                                |
| +AppPort=?           | The Application Port 2 for general APPs and 10 for TTN MAPPER.    |
| +ChipID=?	           | get ChipID                                                        |
| +ChMask=?            | set the channelmask in the frequencyband                          |
| +Class=?             | Class A or C                                                      |
| +ConfirmedNbTrials=? | The number of adaptive rate changes allowed. Default 4            |
| +DefaultSet=1        | to reset parameter to Default setting                             |
| +DelCDKEY=1 	       | to delete the CDKEY                                               |
| +DevAddr=?           | Unique (ABP Mode)                                                 |
| +DevEui=?            | Unique (OTAA Mode)                                                |
| +DutyCycle=?         | The time between transmission in mS. Typically, 15000 to 3600000  |
| +IsTxConfirmed=?     | LoRaWAN ACK Message 1 on, 0 off.                                  |
| +Join=1	             | start join                                                        |
| +LORAWAN=?           | LoRaWAN  1, LoRa 0                                                |
| +LPM=1  	           | Low Power Mode                                                    |
| +NwkSKey=?           | Unique (ABP Mode)                                                 |
| +OTAA=?              | OTAA 1, ABP 0                                                     |
| +Passkey=?           | Unique (ABP Mode)                                                 |
| +RESET=1             | device reset                                                      |
| +XXX                 | wake up from deep sleep                                           |

This are special AT commands for our firmware  

| AT Command           | Value                                                             |
|----------------------|-------------------------------------------------------------------|
| +BATTERY=?           | shows current battery voltage                                     |
| +FLASH=?             | shows firmware type                                               |
| +GPS=?               | turn GPS on 1, turn GPS off 0                                     |
| +LED=?               | shows if RGB LED is activated                                     |
| +VER=?               | shows firmware version                                            |

    

