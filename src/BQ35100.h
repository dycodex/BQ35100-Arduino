#ifndef BATTERY_GAUGE_BQ35100_H
#define BATTERY_GAUGE_BQ35100_H

#include <Wire.h>
#include <stdint.h>
#include "BQ35100_registers.h"

/**
 * BQ35100 class for measuring battery
 */
class BQ35100 {
public:
    BQ35100();
    ~BQ35100();

    bool begin(uint8_t address = 0x55);
    uint16_t readVoltage();
private:
    uint8_t i2cAddress;
};

#endif