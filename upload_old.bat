@echo off
arduino-cli compile -b arduino:avr:nano:cpu=atmega328old -p COM4
arduino-cli upload -b arduino:avr:nano:cpu=atmega328old -p COM4