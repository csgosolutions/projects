#ifndef BMI323_H
#define BMI323_H

#include "stm32f1xx_hal.h"

// BMI 323 registers
#define BMI323_CHIP_ID          0x00
#define BMI323_CHIP_ID_VALUE    0x5B

// SPI communication functions
void bmi323_spi_write(uint8_t reg, uint8_t data);
uint8_t bmi323_spi_read(uint8_t reg);

// BMI 323 driver functions
void bmi323_init(SPI_HandleTypeDef *hspi);
int16_t bmi323_read_accel_x(void);
int16_t bmi323_read_accel_y(void);
int16_t bmi323_read_accel_z(void);

#endif // BMI323_H
