#include "RadioUtil.h"

int16_t stepUp(float value, int16_t scale)
{
    return int(round(value * scale));
}

float stepDown(int16_t value, int16_t scale)
{
    return float(float(value) / float(scale));
}
