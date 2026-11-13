
#include <Adafruit_NeoPixel.h>

// ATOM Lite Grove connector
const int LED_PIN = 26;
const int BUTTON_PIN = 32;

Adafruit_NeoPixel led(
  1, LED_PIN, NEO_GRB + NEO_KHZ800
);

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  led.begin();
  led.setBrightness(70);
  led.setPixelColor(0, led.Color(255, 0, 0));
  led.show();

  Serial.println("Hardware test started!");
}

void loop() {
  bool pressed = digitalRead(BUTTON_PIN) == LOW;

  if (pressed) {
    led.setPixelColor(0, led.Color(0, 255, 0));
  } else {
    led.setPixelColor(0, led.Color(255, 0, 0));
  }

  led.show();

  static bool previous = false;
  if (pressed != previous) {
    Serial.println(pressed ? "PRESSED" : "RELEASED");
    previous = pressed;
  }

  delay(30);
}
