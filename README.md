# <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/HelTec.png" width=150> <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/cubecell.png" width=150> Getting Started Guide
# with LoRaWan MultiSensor Firmware
# (c) by <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/wasn_logo.png" width=150>

[Connecting the Cubell to your computer](#connecting-the-cubecell-to-your-computer)  
[Use CubeCell Configurator to upload firmware](#use-cubecell-configurator-to-upload-firmware)  
[Use CubeCell Configurator for CubeCell configuration](#use-cubecell-configurator-for-cubecell-configuration)  
[The Things Network decoder](#the-things-network-decoder)  
[Connecting a sensor](#connecting-a-sensor)  
[Connecting a battery to the CubeCell Capsule](#connecting-a-battery-to-the-cubecell-capsule)  


## Connecting the CubeCell to your Computer

- connect the USB board to the capsule  
![USB_Board](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/USB_board.jpg)  
  - the white dot on the USB board must align with the white dot on the capsule (beside the Reset button)  
![Capsule_Connector](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_wo_Sensor.jpg)  
![Capsule_and_USB](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_and_USB.jpg)  
- connect the micro USB of the USB board to your computer  

If you have a CubeCell board just connect the micro USB to your computer

## Use CubeCell Configurator to upload firmware

The easy way to get the Capsule up and running is:

- Download the CubeCell Configurator from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Configurator/CubeCellConfigurator.exe).  
- Open the CubeCell Configurator
  - Select the right COM port
  - Select the CubeCell Type (board, capsule)
  - Select the right frequency band (EU868, US915, AU915, AU915SB2)
  - Select RGB LED Status (on, off)
  - click Flash Firmware
    - Firmware is now downloaded from github.
    - The firmware will be written to the capsule

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

The firmware has the following config:

- REGION: (selectable)
  - EU868
  - US915
  - AU915
  - AU915SB2
- CLASS_A
- OTAA
- ADR: ON
- Net_Reservation: ON
- AT_SUPPORT: ON
- RGB: (selectable)
  - ACTIVE
  - DEACTIVE
- All Keys set to zero

The firmware auto detects the connected I2C sensor.  
You can connect more than one sensor to the I2C bus.  
The only limitation is, that you can connect only 1 sensor of each modell.  
These sensors are supported:

- ADS1015/ADS1115
- BH1750   
- BME680 
- BME280 
- BMP180
- BMP280
- CCS811   
- HDC1080
- SHT2x

OneWire Sensors are supported now on PIN GPIO1.

## Use CubeCell Configurator for CubeCell configuration

- Login to TTN and create a new device. 
  - Get your keys from TTN.
- Open the CubeCell Configurator
  - Select your COM Port and click connect.
  - Keys and DutyCycle are read from the CubeCell device.
  - Type in your Keys and DutyCycle.
  - Click on Write.

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

Now the keys are saved and the CubeCell device will reboot.

## The Things Network decoder

Login to TTN and define the decoder.  
The decoder can be downloaded from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/TTN-Decoder/ttn-decode.js).

## Connecting a sensor

If you have bought a sensor from our Website ([buy](https://www.wasn.eu/c/sensoren)) or from Heltec then you can just plug it in the capsule.
![Capaule_and_Sensor](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_and_Sensor.jpg)

If not here is the pinout for connecting your sensor:

![PinOut](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_PinOut.PNG)

- Vext is used for powering the sensors. This pin only delivers power to the sensor when taking the measurement.
- use VS and GND to connect a solar panel (5.5 - 7V).

You can connect more than one sensor to the I2C bus.  
The only limitation is, that you can connect only 1 sensor of each modell.  
These sensors are supported:

- ADS1015/ADS1115
- BH1750   
- BME680 
- BME280 
- BMP180
- BMP280
- CCS811   
- HDC1080
- SHT2x

OneWire Sensors are supported now on PIN GPIO1.

## Connecting a battery to the CubeCell Capsule

This battery fits nicely in the capsule ([buy](https://www.wasn.eu/p/akku-100mah-fuer-capsule))

![Battery](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Battery.PNG)

If you have bought the Capsule from us ([buy](https://www.wasn.eu/p/cubecell-capsule)) there is a battery connector installed.

![Battery Connector](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_Battery_Connector.png)

If not you have to solder a connector or the battery directly to this two solder pads:

![Battery Connection](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_Battery.png)
