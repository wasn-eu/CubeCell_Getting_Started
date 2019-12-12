# 1 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
/*

  LoRaWan_MultiSensor

  programmed by WideAreaSensorNetwork

  v1.9.5 by WASN.eu

*/
# 7 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
# 8 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 9 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 10 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2

/*

   Define your Settings below

*/
# 28 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
//CAPSULE_001
//const char myDevEui[] = { 0x00, 0x23, 0x07, 0xE7, 0x01, 0xEE, 0xDF, 0x8E };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0x21, 0xDD, 0x29, 0x80, 0x45, 0x0E, 0xA8, 0xD5, 0x29, 0x7A, 0xB2, 0x9A, 0x90, 0x29, 0x12, 0x62 };

//CAPSULE_002
//const char myDevEui[] = { 0x00, 0x20, 0xE6, 0x4A, 0x49, 0x5B, 0x2F, 0x92 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0xFA, 0x88, 0xE2, 0xD0, 0x34, 0x5E, 0x14, 0x3C, 0xFB, 0x78, 0x0A, 0x4B, 0x67, 0xDC, 0x85, 0x46 };

//CAPSULE_003
//const char myDevEui[] = { 0x00, 0x70, 0x30, 0xFF, 0x92, 0x1E, 0xD8, 0x46 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0xA5, 0xD1, 0xE4, 0xAD, 0x46, 0x84, 0x21, 0xBD, 0xA0, 0xD6, 0x92, 0x65, 0x63, 0xBB, 0x43, 0x5D };

//CAPSULE_004
//const char myDevEui[] = { 0x00, 0xDF, 0x9E, 0x17, 0x0D, 0x29, 0xFC, 0xD1 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0x59, 0xFC, 0x2E, 0x6A, 0xF0, 0x2B, 0x20, 0x02, 0x39, 0xAA, 0xA3, 0x70, 0x67, 0xB8, 0x08, 0xFD };

//CAPSULE_005
//const char myDevEui[] = { 0x00, 0x8B, 0xE3, 0x6E, 0x2F, 0xCF, 0x87, 0x73 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0xE2, 0x95, 0x2E, 0xE3, 0x91, 0x85, 0xF6, 0xA1, 0x38, 0x05, 0x41, 0x0B, 0x25, 0x50, 0x25, 0x7D };

//BOARD_001
//const char myDevEui[] = { 0x00, 0x92, 0x25, 0xDD, 0x0A, 0xC5, 0x73, 0x54 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0x84, 0xA7, 0x3F, 0x37, 0x8B, 0x72, 0xD9, 0xA2, 0x3C, 0x59, 0x8D, 0xBF, 0xCB, 0x96, 0x09, 0x08 };

//BOARD_002
//const char myDevEui[] = { 0x00, 0x4B, 0xE3, 0x42, 0x2B, 0x23, 0x06, 0x67 };
//const char myAppEui[] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x3C, 0x84 };
//const char myAppKey[] = { 0x22, 0x72, 0xAC, 0xC5, 0x83, 0xBD, 0x4B, 0xF0, 0x67, 0x74, 0x02, 0x94, 0x2D, 0x71, 0x6C, 0x11 };

const char myDevEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const char myAppEui[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const char myAppKey[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

/*the application data transmission duty cycle.  value in [ms].*/
uint32_t APP_TX_DUTYCYCLE = 900000;

/*

  NO USER CHANGES NEEDED UNDER THIS LINE

*/
# 74 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
# 75 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 76 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 77 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 78 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 79 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 80 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 81 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 82 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 83 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 84 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 85 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2
# 86 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 2

extern uint8_t DevEui[];
extern uint8_t AppEui[];
extern uint8_t AppKey[];


# 91 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 91 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    BME_680_e = 
# 91 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 91 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 1

# 92 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 92 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    BME_280_e = 
# 92 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 92 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 2

# 93 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 93 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    CCS_811_e = 
# 93 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 93 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 3

# 94 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 94 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    HDC_1080_e = 
# 94 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                 false
# 94 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                      ; // 4

# 95 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 95 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    BMP_180_e = 
# 95 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 95 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 5

# 96 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 96 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    BH_1750_e = 
# 96 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 96 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 6

# 97 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 97 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    BMP_280_e = 
# 97 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                false
# 97 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                     ; // 7

# 98 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 98 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    SHT_2X_e = 
# 98 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
               false
# 98 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                    ; // 8

# 99 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 99 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    ADS_1015_e = 
# 99 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                 false
# 99 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                      ; // 9

# 100 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 100 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    MPU_9250_e = 
# 100 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                 false
# 100 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                      ; // 10

# 101 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 101 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    One_Wire_e = 
# 101 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                 false
# 101 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                      ; // 100-103
uint8_t sensortype = 0;

/*

   set LoraWan_RGB to Active,the RGB active in loraWan

   RGB red means sending;

   RGB purple means joined done;

   RGB blue means RxWindow1;

   RGB yellow means RxWindow2;

   RGB green means received done;

*/
# 116 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
/*

   set to 1 the enable AT mode

   set to 0 the disable support AT mode

*/
# 144 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
/*LoraWan Class*/
DeviceClass_t CLASS = CLASS_A;
/*OTAA or ABP*/

# 147 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 147 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    OVER_THE_AIR_ACTIVATION = 
# 147 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                              true
# 147 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                                             ;
/*ADR enable*/

# 149 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 149 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    LORAWAN_ADR_ON = 
# 149 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                     true
# 149 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                                ;
/* set LORAWAN_Net_Reserve ON, the node could save the network info to flash, when node reset not need to join again */

# 151 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 151 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    KeepNet = 
# 151 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
              false
# 151 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                                 ;
/*LoraWan REGION*/
LoRaMacRegion_t REGION = LORAMAC_REGION_AU915;

/* Indicates if the node is sending confirmed or unconfirmed messages */

# 156 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
bool 
# 156 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
    IsTxConfirmed = 
# 156 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                    true
# 156 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                        ;
/*!

  Number of trials to transmit the frame, if the LoRaMAC layer did not

  receive an acknowledgment. The MAC performs a datarate adaptation,

  according to the LoRaWAN Specification V1.0.2, chapter 18.4, according

  to the following table:



  Transmission nb | Data Rate

  ----------------|-----------

  1 (first)       | DR

  2               | DR

  3               | max(DR-1,0)

  4               | max(DR-1,0)

  5               | max(DR-2,0)

  6               | max(DR-2,0)

  7               | max(DR-3,0)

  8               | max(DR-3,0)



  Note, that if NbTrials is set to 1 or 2, the MAC will not decrease

  the datarate, in case the LoRaMAC layer did not receive an acknowledgment

*/
# 177 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
uint8_t ConfirmedNbTrials = 8;

/* Application port */
uint8_t AppPort = 2;

float Temperature, Humidity, Pressure, lux, co2, tvoc;
uint16_t baseline, baselinetemp;
int count;
int maxtry = 50;

HDC1080 hdc1080;
CCS811 ccs;
BMP280 bmp280;
BH1750 lightMeter;



uint8_t baselineflash[2];
BME680_Class bme680;
BME280 bme280;
BMP085 bmp180;
MPU9250 mpu9250;
ADS1015 ads1015;

OneWire ds(P6_1); // on pin GPIO1 PIN6 (a 4.7K resistor is necessary)

/*!

   \brief   Prepares the payload of the frame

*/
# 207 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
static void PrepareTxFrame( uint8_t port )
{
  pinMode(P3_2 /*gpio6*/, OUTPUT);
  digitalWrite(P3_2 /*gpio6*/, LOW);
  delay(500);

  AppDataSize = 0;

  /*

      BME680

  */
# 219 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (BME_680_e) {
    sensortype = 1;

    bme680.begin(I2C_STANDARD_MODE);
    delay(1000);
    bme680.setOversampling(TemperatureSensor, Oversample16);
    bme680.setOversampling(HumiditySensor, Oversample16);
    bme680.setOversampling(PressureSensor, Oversample16);
    bme680.setIIRFilter(IIR4);
    bme680.setGas(320, 150); // 320C for 150 milliseconds

    static int32_t temperature, humidity, pressure, gas;
    bme680.getSensorData(temperature, humidity, pressure, gas);
    delay(500);
    bme680.getSensorData(temperature, humidity, pressure, gas);

    Temperature = temperature / 100.0;
    Humidity = humidity / 1000.0;
    Pressure = pressure / 100.0;
    co2 = gas / 100.0;
    tvoc = CalculateIAQ();

    Wire.end();

    AppData[AppDataSize++] = 1;

    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)(Humidity * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)(Humidity * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0) >> 8);;
    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)co2 >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)co2);

    AppData[AppDataSize++] = (uint8_t)((int)tvoc >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)tvoc);

    Serial.print("BME680: T = ");
    Serial.print(Temperature);
    Serial.print("C, RH = ");
    Serial.print(Humidity);
    Serial.print(" %, Lux = ");
    Serial.print(lux);
    Serial.print(" lx, Pressure = ");
    Serial.print(Pressure);
    Serial.print(" hPA, GAS = ");
    Serial.print(co2);
    Serial.print("mOhm, IAQ = ");
    Serial.println(tvoc);
  }

  /*

    BME280

  */
# 277 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (BME_280_e) {
    sensortype = 2;

    if (!bme280.init()) {
      Serial.println("Device error!");
    }
    delay(1000);
    Temperature = bme280.getTemperature();
    Pressure = bme280.getPressure() / 100.0;
    Humidity = bme280.getHumidity();

    Wire.end();

    AppData[AppDataSize++] = 2;

    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)(Humidity * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)(Humidity * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0) >> 8);;
    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0));

    Serial.print("BME280: T = ");
    Serial.print(Temperature);
    Serial.print("C, RH = ");
    Serial.print(Humidity);
    Serial.print(" %, Lux = ");
    Serial.print(lux);
    Serial.print(" lx, Pressure = ");
    Serial.print(Pressure);
    Serial.println(" hPA");
  }

  /*

      HDC1080

  */
# 316 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (HDC_1080_e) {
    sensortype = 4;

    count = 0;
    hdc1080.begin(0x40);
    delay(500);
    Temperature = (float)(hdc1080.readTemperature());
    Humidity = (float)(hdc1080.readHumidity());
    Wire.end();
    while (Temperature > 120.0 && count < maxtry) {
      hdc1080.begin(0x40);
      delay(500);
      Temperature = (float)(hdc1080.readTemperature());
      Humidity = (float)(hdc1080.readHumidity());
      Wire.end();
      count++;
      delay(500);
    }
    if (Temperature > 120.0) {
      Temperature = 0.0;
      Humidity = 0.0;
      Serial.println("HDC ERROR");
    }
    hdc1080.end();

    AppData[AppDataSize++] = 4;

    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = ((int)(Humidity * 10.0)) >> 8;
    AppData[AppDataSize++] = (int)(Humidity * 10.0);

    Serial.print("HDC1080: T = ");
    Serial.print(Temperature);
    Serial.print("C, RH = ");
    Serial.print(Humidity);
    Serial.println(" % ");
  }

  /*

    CCS811

  */
# 360 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (CCS_811_e) {
    sensortype = 3;

    count = 0;
    ccs.begin();
    delay(1000);

    FLASH_read_at((0x0ffff400u) /**< The base pointer of the user SFlash memory. */+(0x00000100u) /**< The number of Flash arrays. */*0 + 0, baselineflash, sizeof(baselineflash));
    baselinetemp = (baselineflash[0] << 8) | baselineflash[1];
    if (baselinetemp > 0) {
      baseline = baselinetemp;
      Serial.print("Read BaseLine: ");
      Serial.println(baseline);
      ccs.setBaseline(baseline);
    }
    delay(5000);

    while (!ccs.available());
    ccs.readData();
    Temperature = ccs.calculateTemperature();
    co2 = ccs.geteCO2();
    tvoc = ccs.getTVOC();

    baseline = ccs.getBaseline();
    baselineflash[0] = (uint8_t)(baseline >> 8);
    baselineflash[1] = (uint8_t)baseline;
    FLASH_update((0x0ffff400u) /**< The base pointer of the user SFlash memory. */+(0x00000100u) /**< The number of Flash arrays. */*0 + 0, baselineflash, sizeof(baselineflash));
    Serial.print("Write BaseLine: ");
    Serial.println(baseline);
    Wire.end();
    while (co2 > 65500.0 && count < maxtry) {
      ccs.begin();
      delay(1000);
      while (!ccs.available());
      ccs.readData();
      co2 = ccs.geteCO2();
      tvoc = ccs.getTVOC();
      Wire.end();
      count++;
    }
    if (co2 > 65500.0) {
      co2 = 0.0;
      tvoc = 0.0;
      Serial.println("CCS ERROR");
    }

    AppData[AppDataSize++] = 3;

    AppData[AppDataSize++] = (uint8_t)((int)co2 >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)co2);

    AppData[AppDataSize++] = (uint8_t)((int)tvoc >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)tvoc);

    Serial.print("CCS811: CO2 = ");
    Serial.print(co2);
    Serial.print(" ppm, TVOC = ");
    Serial.print(tvoc);
    Serial.print(" ppb, Baseline: ");
    Serial.println(baseline);
  }

  /*

    BMP180

  */
# 426 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (BMP_180_e) {
    sensortype = 5;

    count = 0;
    bmp180.begin();
    delay(500);
    Temperature = (float)(bmp180.readTemperature());
    Pressure = (float)(bmp180.readPressure()) / 100.0;
    Wire.end();
    while (Temperature > 120.0 && count < maxtry) {
      bmp180.begin();
      delay(500);
      Temperature = (float)(bmp180.readTemperature());
      Pressure = (float)(bmp180.readPressure()) / 100.0;
      Wire.end();
      count++;
      delay(500);
    }
    if (Temperature > 120.0) {
      Temperature = 0.0;
      Humidity = 0.0;
      Serial.println("BMP ERROR");
    }

    AppData[AppDataSize++] = 5;

    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0) >> 8);;
    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0));

    Serial.print("BMP180: T = ");
    Serial.print(Temperature);
    Serial.print("C, P = ");
    Serial.print(Pressure);
    Serial.println("hPa");
  }

  /*

    BH1750

  */
# 469 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (BH_1750_e) {
    sensortype = 6;

    count = 0;
    lightMeter.begin(BH1750::ONE_TIME_HIGH_RES_MODE_2);
    delay(100);
    lux = lightMeter.readLightLevel();
    delay(100);
    lux = lightMeter.readLightLevel();
    lightMeter.end();
    Wire.end();

    AppData[AppDataSize++] = 6;

    AppData[AppDataSize++] = (uint8_t)((int)(lux * 10.0) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)(lux * 10.0));

    Serial.print("BH1750: Light = ");
    Serial.print(lux);
    Serial.println("lx");
  }

  /*

      BMP_280

  */
# 494 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (BMP_280_e) {
    sensortype = 7;

    count = 0;
    bmp280.begin();
    delay(500);
    bmp280.setSampling(BMP280::MODE_NORMAL, /* Operating Mode. */
                       BMP280::SAMPLING_X2, /* Temp. oversampling */
                       BMP280::SAMPLING_X16, /* Pressure oversampling */
                       BMP280::FILTER_X16, /* Filtering. */
                       BMP280::STANDBY_MS_500); /* Standby time. */
    Temperature = bmp280.readTemperature();
    Pressure = (float)bmp280.readPressure() / 100.0;
    Wire.end();
    while (Pressure > 1190.0 && count < maxtry) {
      bmp280.begin();
      delay(500);
      bmp280.setSampling(BMP280::MODE_NORMAL, /* Operating Mode. */
                         BMP280::SAMPLING_X2, /* Temp. oversampling */
                         BMP280::SAMPLING_X16, /* Pressure oversampling */
                         BMP280::FILTER_X16, /* Filtering. */
                         BMP280::STANDBY_MS_500); /* Standby time. */
      Pressure = (float)bmp280.readPressure() / 100.0;
      Wire.end();
      count++;
      delay(500);
    }
    if (Pressure > 1190.0) {
      Pressure = 0;
      Serial.println("BMP ERROR");
    }

    AppData[AppDataSize++] = 7;

    AppData[AppDataSize++] = (uint8_t)(((int)((Temperature + 100.0) * 10.0)) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = (uint8_t)(((int)(Pressure * 10.0)) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)(Pressure * 10.0));

    Serial.print("BMP280: T=");
    Serial.print(Temperature);
    Serial.print("C, Pressure=");
    Serial.print(Pressure);
    Serial.println(" hPA");
  }

  /*

      SHT_2X

  */
# 544 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (SHT_2X_e) {
    Wire.begin();
    delay(500);
    Temperature = SHT2x.GetTemperature();
    Humidity = SHT2x.GetHumidity();
    Wire.end();

    AppData[AppDataSize++] = 7;

    AppData[AppDataSize++] = (uint8_t)(((int)((Temperature + 100.0) * 10.0)) >> 8);
    AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

    AppData[AppDataSize++] = ((int)(Humidity * 10.0)) >> 8;
    AppData[AppDataSize++] = (int)(Humidity * 10.0);

    Serial.print("SHT2X: T=");
    Serial.print(Temperature);
    Serial.print("C, Humidity=");
    Serial.print(Humidity);
    Serial.println(" %");
  }

  /*

      ADS_1015

  */
# 569 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (ADS_1015_e) {
    ads1015.begin();
    int16_t adc0, adc1, adc2, adc3;

    adc0 = ads1015.readADC_SingleEnded(0);
    adc1 = ads1015.readADC_SingleEnded(1);
    adc2 = ads1015.readADC_SingleEnded(2);
    adc3 = ads1015.readADC_SingleEnded(3);

    AppData[AppDataSize++] = 8;

    AppData[AppDataSize++] = ((int)adc0) >> 8;
    AppData[AppDataSize++] = (int)adc0;
    AppData[AppDataSize++] = ((int)adc1) >> 8;
    AppData[AppDataSize++] = (int)adc1;
    AppData[AppDataSize++] = ((int)adc2) >> 8;
    AppData[AppDataSize++] = (int)adc2;
    AppData[AppDataSize++] = ((int)adc3) >> 8;
    AppData[AppDataSize++] = (int)adc3;

    Serial.print("ADS1015: ADC0=");
    Serial.print(adc0);
    Serial.print(", ADC1=");
    Serial.print(adc1);
    Serial.print(", ADC2=");
    Serial.print(adc2);
    Serial.print(", ADC3=");
    Serial.print(adc3);
    Serial.println();

    Wire.end();
  }

  /*

    MPU9250

  */
# 605 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (MPU_9250_e) {
    sensortype = 10;

    mpu9250.setWire(&Wire);

    mpu9250.beginAccel();
    mpu9250.beginGyro();
    mpu9250.beginMag();

    uint8_t sensorId;

    if (mpu9250.readId(&sensorId) == 0) {
      Serial.println("MPU9250 sensorId: " + String(sensorId));
    } else {
      Serial.println("Cannot read sensorId");
    }

    float aX, aY, aZ, aSqrt, gX, gY, gZ, mDirection, mX, mY, mZ;
    if (mpu9250.accelUpdate() == 0) {
      aX = mpu9250.accelX();
      aY = mpu9250.accelY();
      aZ = mpu9250.accelZ();
      aSqrt = mpu9250.accelSqrt();
      Serial.print("accelX: " + String(aX));
      Serial.print(", accelY: " + String(aY));
      Serial.print(", accelZ: " + String(aZ));
      Serial.println(", accelSqrt: " + String(aSqrt));
    } else {
      Serial.println("Cannod read accel values");
    }

    if (mpu9250.gyroUpdate() == 0) {
      gX = mpu9250.gyroX();
      gY = mpu9250.gyroY();
      gZ = mpu9250.gyroZ();
      Serial.print("gyroX: " + String(gX));
      Serial.print(", gyroY: " + String(gY));
      Serial.println(", gyroZ: " + String(gZ));
    } else {
      Serial.println("Cannot read gyro values");
    }

    if (mpu9250.magUpdate() == 0) {
      mX = mpu9250.magX();
      mY = mpu9250.magY();
      mZ = mpu9250.magZ();
      mDirection = mpu9250.magHorizDirection();
      Serial.print("magX: " + String(mX));
      Serial.print(", maxY: " + String(mY));
      Serial.print(", magZ: " + String(mZ));
      Serial.println(", horizontal direction: " + String(mDirection));
    } else {
      Serial.println("Cannot read mag values");
    }

    Wire.end();

    AppData[AppDataSize++] = 10;

    unsigned char *puc;
    puc = (unsigned char *)(&aX);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&aY);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&aZ);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&gX);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&gY);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&gZ);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&mX);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&mY);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&mZ);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&aSqrt);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
    puc = (unsigned char *)(&mDirection);
    AppData[AppDataSize++] = puc[0];
    AppData[AppDataSize++] = puc[1];
    AppData[AppDataSize++] = puc[2];
    AppData[AppDataSize++] = puc[3];
  }

  /*

     One_Wire

  */
# 725 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  if (One_Wire_e) {
    byte present = 0;
    byte type_s;
    byte data[12];
    byte owaddress[8];
    int owsensorcount = 0;

    if (ds.search(owaddress)) {
      Serial.print("OneWire Sensor foudn with data =");
      for(byte i = 0; i < 8; i++) {
        Serial.write(' ');
        Serial.print(owaddress[i], 16);
      }

      if (OneWire::crc8(owaddress, 7) != owaddress[7]) {
        Serial.println("CRC is not valid!");
        return;
      }
      Serial.println();

      switch (owaddress[0]) {
        case 0x10:
          Serial.print("  Chip = DS18S20 (0x10)"); // or old DS1820
          type_s = 1;
          break;
        case 0x28:
          Serial.print("  Chip = DS18B20 (0x28)");
          type_s = 0;
          break;
        case 0x22:
          Serial.print("  Chip = DS1822 (0x22)");
          type_s = 0;
          break;
        default:
          Serial.print("Device is not known.");
        return;
      }

      ds.reset();
      ds.select(owaddress);
      ds.write(0x44, 1);

      delay(1000);

      present = ds.reset();
      ds.select(owaddress);
      ds.write(0xBE);

      // 28 AA 68 3B 4A 14 1 AC    = DS18B20 (0x28) 21.75C type_s=0
      for (byte i = 0; i < 9; i++) {
        data[i] = ds.read();
      }

      int16_t raw = (data[1] << 8) | data[0];
      if (type_s) {
        raw = raw << 3;
        if (data[7] == 0x10) {
          raw = (raw & 0xFFF0) + 12 - data[6];
        }
      } else {
        byte cfg = (data[4] & 0x60);
        if (cfg == 0x00) raw = raw & ~7;
        else if (cfg == 0x20) raw = raw & ~3;
        else if (cfg == 0x40) raw = raw & ~1;
      }
      Temperature = (float)raw / 16.0;

      AppData[AppDataSize++] = 100 + owsensorcount++;
      AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0) >> 8);
      AppData[AppDataSize++] = (uint8_t)((int)((Temperature + 100.0) * 10.0));

      Serial.print(": T=");
      Serial.print(Temperature);
      Serial.println("C");
    }
    ds.reset_search();
  }

  digitalWrite(P3_2 /*gpio6*/, HIGH);

  uint16_t BatteryVoltage = GetBatteryVoltage();
  AppData[AppDataSize++] = (uint8_t)(BatteryVoltage >> 8);
  AppData[AppDataSize++] = (uint8_t)BatteryVoltage;
  Serial.print("BatteryVoltage: ");
  Serial.print(BatteryVoltage);
  Serial.print(", AppDataSize: ");
  Serial.println(AppDataSize);
  for (int i = 0; i < AppDataSize; i++) {
    Serial.print(AppData[i], 16);
    Serial.print(" ");
  }
  Serial.println();
}

void setup() {
  memcpy(DevEui, myDevEui, sizeof(myDevEui)); //Add these 3 lines to setup func
  memcpy(AppEui, myAppEui, sizeof(myAppEui));
  memcpy(AppKey, myAppKey, sizeof(myAppKey));


  BME_680_e = 
# 825 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
             false
# 825 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                  ;
  BME_280_e = 
# 826 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
             false
# 826 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                  ;
  CCS_811_e = 
# 827 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
             false
# 827 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                  ;
  BMP_180_e = 
# 828 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
             false
# 828 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                  ;
  HDC_1080_e = 
# 829 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
              false
# 829 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                   ;
  BH_1750_e = 
# 830 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
             false
# 830 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                  ;
  SHT_2X_e = 
# 831 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
            false
# 831 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                 ;
  ADS_1015_e = 
# 832 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
              false
# 832 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                   ;
  MPU_9250_e = 
# 833 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
              false
# 833 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                   ;
  sensortype = 88;
# 882 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
  BoardInitMcu( );
  Serial.begin(115200);

  Enable_AT();

  DeviceState = DEVICE_STATE_INIT;
  LoRaWAN.Ifskipjoin();


  pinMode(P3_2 /*gpio6*/, OUTPUT);
  digitalWrite(P3_2 /*gpio6*/, LOW); //set vext to high
  delay(500);
  Wire.begin();
  byte error, address;
  int nDevices;

  Serial.println("Scanning...");

  nDevices = 0;
  for (address = 1; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C device found at address 0x");
      if (address < 16) {
        Serial.print("0");
      }
      Serial.print(address, 16);
      Serial.println("  !");

      switch (address)
      {
        case 35: //0x23 -- BH1750
          {
            Serial.println("found BH1750");
            BH_1750_e = 
# 920 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                       true
# 920 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                           ;
            break;
          }
        case 64: //0x40 -- HDC1080/SHT2X
          {
            if (SHT2x.GetTemperature() > -100 && SHT2x.GetTemperature() < 100) {
              Serial.println("found SHT2X");
              SHT_2X_e = 
# 927 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                        true
# 927 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                            ;
            } else {
              Serial.println("Found HDC1080");
              HDC_1080_e = 
# 930 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                          true
# 930 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                              ;
            }
            break;
          }
        case 90: //0x5A --CCS811
          {
            Serial.println("Found CCS811");
            CCS_811_e = 
# 937 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                       true
# 937 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                           ;
            break;
          }
        case 104: //0x68 -- MPU9250 9-axis sensor
          {
            Serial.println("Found MPU9250");
            MPU_9250_e = 
# 943 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                        true
# 943 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                            ;
            break;
          }
        case 118: //0x76 -- BMP280/BME280
          {
            if (!bme280.init()) {
              Serial.println("Found BMP280");
              BMP_280_e = 
# 950 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                         true
# 950 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                             ;
            } else {
              Serial.println("Found BME280");
              BME_280_e = 
# 953 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                         true
# 953 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                             ;
            }
            break;
          }
        case 119: //0x77 -- BME680/BMP180
          {
            if (!bmp180.begin()) {
              Serial.println("Found BME680");
              BME_680_e = 
# 961 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                         true
# 961 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                             ;
            } else {
              Serial.println("Found BMP180");
              BMP_180_e = 
# 964 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                         true
# 964 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                             ;
            }
            break;
          }
        case 222: //0x48 -- ADS1015
          {
            Serial.println("Found ADS1015");
            ADS_1015_e = 
# 971 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino" 3 4
                        true
# 971 "C:\\Users\\raystream\\Documents\\#Development\\LoRa\\CubeCell\\capsule_multisensor\\capsule_multisensor.ino"
                            ;
            break;
          }
      }

      nDevices++;
    }
    else if (error == 4)
    {
      Serial.print("Unknown error at address 0x");
      if (address < 16)
        Serial.print("0");
      Serial.println(address, 16);
    }
  }
  if (nDevices == 0)
  {
    Serial.println("No I2C devices found");
  }
  Wire.end();

}

void loop()
{
  switch ( DeviceState )
  {
    case DEVICE_STATE_INIT:
      {

        getDevParam();

        printDevParam();
        Serial.printf("LoRaWan Class % X  start! \r\n", CLASS + 10);
        LoRaWAN.Init(CLASS, REGION);
        DeviceState = DEVICE_STATE_JOIN;
        break;
      }
    case DEVICE_STATE_JOIN:
      {
        LoRaWAN.Join();
        break;
      }
    case DEVICE_STATE_SEND:
      {
        PrepareTxFrame( AppPort );
        LoRaWAN.Send();
        DeviceState = DEVICE_STATE_CYCLE;
        break;
      }
    case DEVICE_STATE_CYCLE:
      {
        // Schedule next packet transmission
        TxDutyCycleTime = APP_TX_DUTYCYCLE + randr( 0, 1000 );
        LoRaWAN.Cycle(TxDutyCycleTime);
        DeviceState = DEVICE_STATE_SLEEP;
        break;
      }
    case DEVICE_STATE_SLEEP:
      {
        LoRaWAN.Sleep();
        break;
      }
    default:
      {
        DeviceState = DEVICE_STATE_INIT;
        break;
      }
  }
}

float CalculateIAQ()
{
  float hum_weighting = 0.25; // so hum effect is 25% of the total air quality score
  float gas_weighting = 0.75; // so gas effect is 75% of the total air quality score

  float hum_score, gas_score;
  float gas_reference = co2;
  float hum_reference = 40;
  int getgasreference_count = 0;

  //Calculate humidity contribution to IAQ index
  if (Humidity >= 38 && Humidity <= 42)
    hum_score = 0.25 * 100; // Humidity +/-5% around optimum
  else
  { //sub-optimal
    if (Humidity < 38)
      hum_score = 0.25 / hum_reference * Humidity * 100;
    else
    {
      hum_score = ((-0.25 / (100 - hum_reference) * Humidity) + 0.416666) * 100;
    }
  }

  //Calculate gas contribution to IAQ index
  float gas_lower_limit = 5000; // Bad air quality limit
  float gas_upper_limit = 50000; // Good air quality limit
  if (gas_reference > gas_upper_limit) gas_reference = gas_upper_limit;
  if (gas_reference < gas_lower_limit) gas_reference = gas_lower_limit;
  gas_score = (0.75 / (gas_upper_limit - gas_lower_limit) * gas_reference - (gas_lower_limit * (0.75 / (gas_upper_limit - gas_lower_limit)))) * 100;

  //Combine results for the final IAQ index value (0-100% where 100% is good quality air)
  float air_quality_score = hum_score + gas_score;

  return air_quality_score;
}



void tcaselect(uint8_t i) {
  if (i > 7) return;

  Wire.beginTransmission(0x70);
  Wire.write(1 << i);
  Wire.endTransmission();
}
