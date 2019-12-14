# <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/wasn_logo.png" width=150> ModularNode & IndoorNode
# <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/HelTec.png" width=70> <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/cubecell.png" width=70> Getting Started Guide
# (c) by <img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/wasn_logo.png" width=70>


[Connecting the Indoor/ModularNode or a Cubell to your computer](#connecting-the-indoor/modularnode-or-cubecell-to-your-computer)  
[Use CubeCell Configurator to upload firmware](#use-cubecell-configurator-to-upload-firmware)  
[Use CubeCell Configurator for configuration](#use-cubecell-configurator-for-configuration)  
[The Things Network decoder](#the-things-network-decoder)  
[Connecting a sensor](#connecting-a-sensor)  
[Connecting a battery to the CubeCell Capsule](#connecting-a-battery-to-the-cubecell-capsule)  


## Connecting the Indoor/ModularNode or CubeCell to your Computer

- connect the USB board to the capsule  
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/USB_board.jpg" width=500>  
</p>

- the white dot on the USB board must align with the white dot on the capsule (beside the Reset button)  
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_wo_Sensor.jpg" width=500>   
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_and_USB.jpg" width=500>    
</p>

- connect the micro USB of the USB board to your computer  

If you have a Indoor/ModularNode or CubeCell board just connect the micro USB to your computer

## Use CubeCell Configurator to upload firmware

The easy way to get the Capsule up and running is:

- Download the CubeCell Configurator from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Configurator/CubeCellConfigurator.exe).  
- Open the CubeCell Configurator
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator_flash.PNG" width=500>  
</p>

  - Select the right COM port (don't click connect)
  - Select the Flash Tab
  - Select the Node Type (IndoorNode, ModularNode, Board, Capsule)
  - Select the right frequency band (EU868, US915, AU915)
  -  Select RGB LED Status (on, off)
  - click Flash Firmware
      - Firmware is now downloaded from github.
      - The firmware will be written to the capsule 
      	- a new window will open and show the state of the firmware transfer
  - switch to the debug tab you should see:
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator_debug.PNG" width=500>  
</p>

    Downloading Firmware …
    Downloadind Firmware done
    Flashing Firmware …
    Flashing Firmware done
    CleanUp Starting
    CleanUp done

The firmware has the following config:

- REGION: (selectable)
  - EU868
  - US915
  - AU915
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
The only limitation is, that you can connect only 1 sensor of each modell on each sensor socket.  
These sensors are supported:

- ADS1015/ADS1115
- BH1750   
- BME680 
- BME280 
- BMP180
- BMP280
- CCS811   
- HDC1080
- MPU9250
- SHT2x

OneWire Sensors are supported on the OW connector (internal GPIO1).

## Use CubeCell Configurator for configuration

- Login to TTN and create an application if you haven’t already. 
- Under your application create a device for the CubeCell device you are setting up
- Open the CubeCell Configurator

<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG" width=500>  
</p>

  - Select your COM Port and click connect.
  - Select the Config Tab
  - Device EUI, Application EUI, App Key and DutyCycle are read from the CubeCell device.
  - copy the keys: Device EUI, Application EUI and App Key
    - Please note that you should copy and paste only one key at a time. On TTN you will notice that there is a Copy icon at the end of each key field. Then back in the Configurator screen just paste each value you copied from the TTN device screen
  - Click on Write.
  - The keys will be saved in the CubeCell device and the device will reboot
  - If you switch  to the debug tap you should see the following:
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator_debug.PNG" width=500>  
</p>

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


## The Things Network decoder

- Login to TTN and go to your application you have previously defined the device in.
- Now you can define the decoder for this application.  
- The decoder can be downloaded from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/TTN-Decoder/ttn-decode.js).

## Connecting a sensor

If you have bought the IndoorNode ([buy](https://www.wasn.eu/p/wasn-indoor-node-mit-cjmcu-8128-sensor)) there is a BME680 sensor fitted in the case.

If you have bought the ModularNode ([buy](https://www.wasn.eu/p/wasn-modular-outdoor-node)) you can connect the sensor to one of the 8 sockets 
or the OneWire Sensors to the OW socket.

If you have bought a sensor from our Website ([buy](https://www.wasn.eu/c/sensoren)) or from Heltec then you can just plug it in the capsule./p>
<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_and_Sensor.jpg" width=500>  
</p>

If not here is the pinout for connecting your sensor:

<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_PinOut.PNG" width=500>  
</p>

- Vext is used for powering the sensors. This pin only delivers power to the sensor when taking the measurement.
- use VS and GND to connect a solar panel (5.5 - 7V).

You can connect more than one sensor to the I2C bus.  
The only limitation is, that you can connect only 1 sensor of each modell on each sensor socket.  
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

OneWire Sensors are supported on the OW connector (internal GPIO1).

You can check which sensor the CubeCell device has found:

- Open the CubeCell Configurator

<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator_debug.PNG" width=500>  
</p>

  - Select your COM Port and click connect.
  - Select the Debug Tab
   - Press the Reset (RST) button on you CubeCell device.
   - you should see a message with the name of your Sensor (for example "BME680 found")

## Connecting a battery to the CubeCell Capsule

This battery fits nicely in the capsule ([buy](https://www.wasn.eu/p/akku-100mah-fuer-capsule))

<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Battery.PNG" width=500>  
</p>

If you have bought the Capsule from us ([buy](https://www.wasn.eu/p/cubecell-capsule)) there is a battery connector installed.

<p align="center">
<img src="https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_Battery_Connector.png" width=500>  
</p>
