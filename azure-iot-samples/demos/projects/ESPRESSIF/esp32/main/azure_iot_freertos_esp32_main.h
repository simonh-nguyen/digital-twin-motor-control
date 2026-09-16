#ifndef AZURE_IOT_FREERTOS_ESP32_MAIN_H
#define AZURE_IOT_FREERTOS_ESP32_MAIN_H



#ifdef __cplusplus
    extern "C" {
#endif

void azure_main( void );

void getData(float* position, float* current, float* velocity);


#ifdef __cplusplus
    }
#endif



#endif /* AZURE_IOT_FREERTOS_ESP32_MAIN_H */

