# Board Tester
Board tester for arduino-powered clocks.

## Development

### First Time Setup
* Download [Arduino CLI](https://github.com/arduino/arduino-cli)
* Install AVR programmer using `arduino-cli core install arduino:avr`

### Sketch Upload
1. Compile: `arduino-cli compile -b arduino:avr:nano:cpu=atmega328 -p COM4`
2. Upload: `arduino-cli upload -b arduino:avr:nano:cpu=atmega328 -p COM4`

From Arduino IDE:
* Board: `Arduino BLE-NANO`
* Processor: `ATmega328P`
* Port: Depends where you have it plugged in, e.g. `COM4`
* Programmer: `AVRISP mkII`

Recommend using Jetbrains CLion with the [Arduino Support](https://plugins.jetbrains.com/plugin/11301-arduino-support) plugin.

## Libraries
* [NeoPixelBus](https://github.com/Makuna/NeoPixelBus)
