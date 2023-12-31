#include "my_functions.h"
#include <cstdlib>
#include <cstdio>

//test pasar valores
int getUltraSonicDistance(long duration){
  int distanceCm = (duration * 10 ) / 292 / 3;
  return distanceCm;
}

//test pasar cadenas muy grandes (memory leaks)
char * getNetworkInfo(const char* ssid, const char* mac_address){
  char * message = (char*) malloc(84);
  sprintf(message, "\nSSID: %s\nMAC: %s", ssid, mac_address);
  return message;
}

char* getUltraSonicString(int distance){
  char * message = (char*) malloc(30);
  sprintf(message, "*** Distancia: %d", distance);
  return message;
}
