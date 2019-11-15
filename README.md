# CubeCell Getting Started Guide
# with LoRaWan_MultiSensor example
# (c) by WASN.eu 

# Use CubeCellConfigurator to upload firmware

The easy way to get the Capsule up and running is:

- Download the CubeCell Configurator from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Configurator/CubeCellConfigurator.exe).
- Download the [capsule_multisensor.ino.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor.ino.cyacd) file from the Firmware directory
- Open the CubeCell Configurator
- Select the right COM port
- click Flash Firmware and select the downloaded file: capsule_multisensor.ino.cyacd
- click ok and the firmware will be written to the capsule

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

The firmware has the following config:

- REGION_EU868
- CLASS_A
- OTAA
- ADR: ON
- Net_Reservation: ON
- AT_SUPPORT: ON
- RGB: ACTIVE
- All Keys set to zero

THe firmware auto detect the connected I2C sensor. These sensors are supported:

- MJMCU-8128
- BME 680 
- BME 280 
- CCS_811   
- BMP_180   
- HDC_1080  
- BH_1750   

If you would like to use the Arduino IDE to compile and upload the firmware please follow this [guide](https://github.com/raystream/CubeCell_Getting_Started/blob/master/arduino_IDE.md).

# use CubeCell Configurator for CubeCell configuration

- Login to TTN and create a new device. Get your keys from TTN.
- Select your COM Port and click connect.
- Keys and DutyCycle are read from the CubeCell device.
- Type in your Keys and DutyCycle.
- Click on Write

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

Now the keys are set and the CubeCell device will reboot.

# The Things Network decoder
Login to TTN and define the decoder. 
The decoder can be downloaded from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/TTN-Decoder/ttn-decode.js).

# Connecting a sensor

If you have bought a sensor from our Website ([buy](https://www.wasn.eu/c/sensoren)) then you can just plug it in the capsule.
If not here is the pinout for connecting your sensor:

![PinOut](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_PinOut.PNG)

# Connecting a battery to the CubeCell Capsule

This battery fits nicely in the capsule ([buy](https://www.wasn.eu/p/akku-100mah-fuer-capsule))

![Battery](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Battery.PNG)

If you have bought the Capsule from us ([buy](https://www.wasn.eu/p/cubecell-capsule)) there is a battery connector installed.
If not you have to solder a connector or the battery directly to this two solder pads:

![Battery Connection](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_Battery.png)
