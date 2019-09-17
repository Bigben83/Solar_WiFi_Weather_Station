/*---------------------------------------------------------------------------
  Project Name : Solar Powered WiFi Weather Station Standalone V1.0
  Features: temperature, dewpoint, dewpoint spread, heat index, humidity, absolute pressure, relative pressure, battery status and
  the famous Zambretti Forecaster (multi lingual)
  Authors: Keith Hungerford, Debasish Dutta and Marc Stähli
  Website : www.opengreenenergy.com

/****** WLAN Settings *******************************************************/

char ssid[] = "your SSID";                           // WiFi Router ssid
char pass[] = "your Password";                       // WiFi Router password

const char* server = "your.server.com";              // Server
const char* api_key = "your API key";                // API write key 

/****** Additional Settings *************************************************/

#define LANGUAGE 'DE'               //either 'DE' for German or 'EN' for English

#define TEMP_CORR (0)               //Manual correction of temp sensor
#define ELEVATION (45)              //Enter your elevation in m ASL to calculate rel pressure (ASL/QNH) at your place

#define sleepTimeMin (5)            //setting of deepsleep time in minutes (default: 10)

// NTP
#define NTP_SERVER      "de.pool.ntp.org"
#define TZ              1           // (utc+) TZ in hours
#define DST_MN          60          // use 60mn for summer time in some countries

#define TZ_SEC          ((TZ)*3600)  // don't change this
#define DST_SEC         ((DST_MN)*60)// don't change this

/****************************************************************************/
/***************************************************************************/
#define WITHDS18B20

***************************************************************************/
#define WITHBMP180

/***************************************************************************/
#define WITHBME230

/****** MQTT Settings ********************************************************/
#define WITHMQTT
const char* mqtt_server = "192.xxx.xxx.xxx";      // MQTT Server (broker) address
const char* mqtt_user = "USER";
const char* mqtt_password = "PASSWORD";
const String mqtt_id = "solarweatherstation";
