#include "main.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"
#include "bmi323.h"

// ...

int main(void) {
  HAL_Init();
  SystemClock_Config();

  MX_GPIO_Init();
  MX_SPI1_Init(); // SPI peripheral used for the BMI 323
  MX_USB_DEVICE_Init();

  bmi323_init(&hspi1); // Initialize the BMI 323 IMU

  while (1) {
    // Read accelerometer data
    int16_t accel_x = bmi323_read_accel_x();
    int16_t accel_y = bmi323_read_accel_y();
    int16_t accel_z = bmi323_read_accel_z();

    // Create a buffer to store the IMU data as a string
    char buffer[64];
    snprintf(buffer, sizeof(buffer), "Accel X: %d, Accel Y: %d, Accel Z: %d\r\n", accel_x, accel_y, accel_z);

    // Send the data over USB
    CDC_Transmit_FS((uint8_t*)buffer, strlen(buffer));

    // Blink the LED
    HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
    HAL_Delay(1000);
  }
}
