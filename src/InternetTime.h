#include <ESP8266WiFi.h>
#include <WifiUDP.h>
#include <NTPClient.h>
#include <Time.h>
#include <TimeLib.h>
#include <Timezone.h>

/**
 * Obtener la hora de internet. 
*/
String getTime();

String getDate();

void setUpTime();