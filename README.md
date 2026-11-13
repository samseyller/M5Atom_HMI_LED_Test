# M5Atom HMI LED Test

A small Arduino hardware test for an M5Stack ATOM Lite connected to an M5Stack Mechanical Key Button Unit. The key LED is red when released and green when pressed; state changes are also printed to the Serial Monitor.

## Hardware

- [M5Stack ATOM Lite ESP32 Development Kit](https://www.robotshop.com/products/m5stack-atom-lite-esp32-development-kit)

  <img src="M5Stack%20ATOM%20Lite.jpg" alt="M5Stack ATOM Lite ESP32 Development Kit" width="400">

- [M5Stack Mechanical Key Button Unit](https://www.robotshop.com/products/m5stack-mechanical-key-button-unit)

  <img src="M5Stack%20Unit%20Key.jpg" alt="M5Stack Mechanical Key Button Unit" width="400">

Connect the button unit to the ATOM Lite Grove connector.

## Installation

### A. Install Arduino IDE

Download and install [Arduino IDE 2](https://www.arduino.cc/en/software), then launch it. Arduino IDE is used to edit, compile, and upload code to the ESP32.

### B. Install ESP32 board support

1. Open **File > Preferences**.
2. Add the following under **Additional Boards Manager URLs**:

   ```text
   https://espressif.github.io/arduino-esp32/package_esp32_index.json
   ```

3. Click **OK**.
4. Open **Tools > Board > Boards Manager**.
5. Search for `esp32` and install **esp32 by Espressif Systems**. The compiler and supporting tools may take several minutes to download.

### C. Select the board

Open **Tools > Board > esp32** and select **M5Stack-ATOM** if it is listed. Otherwise, use **ESP32 Dev Module** for this initial test. Keep the default board settings unless uploading fails.

Troubleshooting settings that have worked well:

- **Upload Speed:** 115200
- **Flash Mode:** DIO
- **Flash Frequency:** 40 MHz

### D. Install the LED library

1. Open **Sketch > Include Library > Manage Libraries**.
2. Search for `Adafruit NeoPixel`.
3. Install **Adafruit NeoPixel by Adafruit**.

`M5Unified` and `M5GFX` are not required because this test controls the pins directly.

## Upload and test

1. Open `M5Atom_HMI_LED_Test.ino` and select the ATOM Lite's serial port.
2. Click **Upload**.
3. Open the Serial Monitor at `115200` baud and press the key.

## License

Licensed under the [MIT License](LICENSE).
