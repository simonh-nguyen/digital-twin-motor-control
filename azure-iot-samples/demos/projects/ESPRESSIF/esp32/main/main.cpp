#include "freertos/FreeRTOS.h"

#include "azure_iot_freertos_esp32_main.h"

extern "C" void app_main(void)
{
  azure_main();
}