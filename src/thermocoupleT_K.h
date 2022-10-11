#ifndef thermocoupleT_K_H
#define thermocoupleT_K_H

#include <Arduino.h>
#include <map>

int32_t KTypeCtoV(int32_t tempC);
int32_t TTypeCtoV(int32_t tempC);
int32_t KTypeVtoC(int32_t TCvoltage);
int32_t TTypeVtoC(int32_t TCvoltage);

#endif