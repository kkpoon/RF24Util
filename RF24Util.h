#ifndef RF24_UTIL_H
#define RF24_UTIL_H

#include <Arduino.h>

#define RF24_CARRIER_SCALE_GRAVITY     1000
#define RF24_CARRIER_SCALE_EULER       1000
#define RF24_CARRIER_SCALE_YPR         1000
#define RF24_CARRIER_SCALE_QUATERNION  1000

int16_t stepUp(float value, int16_t scale);

float stepDown(int16_t value, int16_t scale);

#endif