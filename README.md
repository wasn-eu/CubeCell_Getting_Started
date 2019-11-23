# CubeCell Getting Started Guide
# with LoRaWan MultiSensor Firmware
# (c) by WASN.eu 


## Use CubeCell Configurator to upload firmware

The easy way to get the Capsule up and running is:

- Download the CubeCell Configurator from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Configurator/CubeCellConfigurator.exe).
- Download the firmware file from the Firmware directory:
  * [capsule_multisensor_EU868_RGBoff.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor_EU868_RGBoff.cyacd) RGB-LED off
  * [capsule_multisensor_EU868_RGBon.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor_EU868_RGBoff.cyacd) RGB-LED on
  * [capsule_multisensor_US915_RGBoff.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor_US915_RGBoff.cyacd) RGB-LED off
  * [capsule_multisensor_US915_RGBon.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor_US915_GBoff.cyacd) RGB-LED on
- Open the CubeCell Configurator
- Select the right COM port
- click Flash Firmware and select the downloaded file: [capsule_multisensor.cyacd](https://github.com/raystream/CubeCell_Getting_Started/raw/master/Firmware/capsule_multisensor.cyacd)
- click ok and the firmware will be written to the capsule

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

The firmware has the following config:

- REGION_EU868 for firmware file with EU868, US915 for firmware file with US915
- CLASS_A
- OTAA
- ADR: ON
- Net_Reservation: ON
- AT_SUPPORT: ON
- RGB: ACTIVE for firmware file with RGBon, DEACTIVE for firmware file with RGBoff
- All Keys set to zero

The firmware auto detect the connected I2C sensor. These sensors are supported:

- ADS1015/ADS1115
- BH1750   
- BME680 
- BME280 
- BMP180
- BMP280
- CCS811   
- HDC1080
- SHT2x

## Use CubeCell Configurator for CubeCell configuration

- Login to TTN and create a new device. Get your keys from TTN.
- Select your COM Port and click connect.
- Keys and DutyCycle are read from the CubeCell device.
- Type in your Keys and DutyCycle.
- Click on Write

![Configurator](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Configurator.PNG)

Now the keys are set and the CubeCell device will reboot.

## The Things Network decoder
Login to TTN and define the decoder. 
The decoder can be downloaded from here [download](https://github.com/raystream/CubeCell_Getting_Started/raw/master/TTN-Decoder/ttn-decode.js).

## Connecting a sensor

If you have bought a sensor from our Website ([buy](https://www.wasn.eu/c/sensoren)) then you can just plug it in the capsule.
If not here is the pinout for connecting your sensor:

![PinOut](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_PinOut.PNG)

## Connecting a battery to the CubeCell Capsule

This battery fits nicely in the capsule ([buy](https://www.wasn.eu/p/akku-100mah-fuer-capsule))

![Battery](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Battery.PNG)

If you have bought the Capsule from us ([buy](https://www.wasn.eu/p/cubecell-capsule)) there is a battery connector installed.
If not you have to solder a connector or the battery directly to this two solder pads:

![Battery Connection](https://github.com/raystream/CubeCell_Getting_Started/raw/master/images/Capsule_Battery.png)
