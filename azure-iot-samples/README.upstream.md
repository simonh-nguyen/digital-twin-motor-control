# Azure IoT samples (vendored snapshot)

This directory is a file snapshot of `simonh-nguyen/azure-middleware`, folded into the DTMC capstone so that remote can be archived.

It is not the live ESP32 firmware. DTMC already uses:

- `libs/azure-iot-middleware-freertos` (official Azure core submodule)
- `libs/demos` (ESP32 sample used by this project)

The original Azure samples README is in `README.upstream.md`. The core middleware submodule was omitted here on purpose; point builds at `../libs/azure-iot-middleware-freertos`.
