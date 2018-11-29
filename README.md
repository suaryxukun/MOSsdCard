# sdlib
A Mongoose OS SD library based on the [SD Card example](https://github.com/cesanta/esp-idf/tree/master/examples/storage/sd_card)

## Description
The SD can be interfaced with the ESP32 using either the dedicated SDMMC or the SPI peripheral.
If using the SPI interface, the pins should be defined in the application's `mos.yml`
The default configured pins are those used by the Lolin32 Pro board.

## C API
The C API is described in `mgos_sd.h`.

## RPC
RPC services are provided by [rpc-service-sd](https://github.com/nliviu/rpc-service-sd)
