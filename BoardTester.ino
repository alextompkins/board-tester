#include <NeoPixelBus.h>

const uint16_t PixelCount = 110;

// make sure to set this to the correct pins
const uint8_t DotDataPin = 2;

#define colorSaturation 10
#define lightness 20
#define wait 3000

NeoPixelBus<NeoRgbwFeature, NeoAvrSk6812Method> strip(PixelCount, DotDataPin);

RgbColor black(0);

// colours for SK6812 are defined as G, R, B, W
RgbwColor pureGreen(colorSaturation, 0, 0, 0);
RgbwColor pureRed(0, colorSaturation, 0, 0);
RgbwColor pureBlue(0, 0, colorSaturation, 0);
RgbwColor green(colorSaturation, 0, 0, lightness);
RgbwColor cyan(colorSaturation, 0, colorSaturation, lightness);
RgbwColor red(0, colorSaturation, 0, lightness);
RgbwColor violet(0, colorSaturation, colorSaturation, lightness);
RgbwColor blue(0, 0, colorSaturation, lightness);
RgbwColor yellow(colorSaturation, colorSaturation, 0, lightness);
RgbwColor white(colorSaturation, colorSaturation, colorSaturation, lightness);
RgbwColor pureWhite(colorSaturation, colorSaturation, colorSaturation, 0);

RgbwColor pureLight(0, 0, 0, lightness);

RgbwColor colors[] = {
        pureRed, pureGreen, pureBlue, pureLight
};

void setup()
{
    Serial.begin(115200);
    while (!Serial); // wait for serial attach

    Serial.println();
    Serial.println("Initializing...");
    Serial.flush();

    // this resets all the neopixels to an off state
    strip.Begin();
    strip.ClearTo(black);
    strip.Show();

    Serial.println();
    Serial.println("Running...");
}

void loop()
{
    Serial.println("Sequence start...");

    // set the colors,
    for (auto &color : colors) {
        for (int i = 0; i < PixelCount; i++) {
            strip.SetPixelColor(i, color);
        }

        strip.Show();

        delay(wait);
    }
}
