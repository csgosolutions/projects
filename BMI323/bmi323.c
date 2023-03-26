#include "bmi323.h"

static SPI_HandleTypeDef *bmi323_hspi;

// SPI communication functions
void bmi323_spi_write(uint8_t reg, uint8_t data) {
    // Write your SPI write function here
}

uint8_t bmi323_spi_read(uint8_t reg) {
    // Write your SPI read function here
}

// BMI 323 driver functions
void bmi323_init(SPI_HandleTypeDef *hspi) {
    bmi323_hspi = hspi;
    // Write your BMI 323 initialization code here
}

int16_t bmi323_read_accel_x(void) {
    // Write your code to read acceleration data from the X-axis
}

int16_t bmi323_read_accel_y(void) {
    // Write your code to read acceleration data from the Y-axis
}

int16_t bmi323_read_accel_z(void) {
    // Write your code to read acceleration data from the Z-axis
}
