#ifndef SENSOR_DRIVER_H
#define SENSOR_DRIVER_H

#include <stdint.h>

int32_t sensor_init(void);
int32_t sensor_read(int8_t *temperature, uint8_t *humidity);
int32_t sensor_deinit(void);

#endif // SENSOR_DRIVER_H
