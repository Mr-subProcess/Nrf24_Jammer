
# NRF24L01+PA/LNA Arduino Jamming Project

This project uses **Arduino** and the **NRF24L01+PA/LNA module** to perform jamming operations on a specific frequency. The **RF24 library** is used to send data and create interference on the target frequency. The **PA (Power Amplifier)** and **LNA (Low Noise Amplifier)** in this module help to extend the communication range and improve signal reception, making it more effective for jamming purposes.
**Note:** If you use an **ESP32** instead of Arduino, the performance will be faster due to the higher processing power and additional features like Wi-Fi and Bluetooth. ESP32 has a more powerful CPU, which may handle RF operations more efficiently, especially in scenarios requiring more complex tasks or higher data rates.

## Requirements

- **Arduino IDE**: [Download here](https://www.arduino.cc/en/software)
- **NRF24L01+PA/LNA Module**: A wireless RF communication module with a power amplifier (PA) and low noise amplifier (LNA) for increased range.
- **Arduino Board**: (UNO, Nano, Mega, etc.)
- **RF24 Library**: You can download the library from [here](https://github.com/nRF24/RF24).

## Wiring

To connect the **NRF24L01+PA/LNA** module to your Arduino, use the following pin connections:

| NRF24L01+PA/LNA Pin | Arduino Pin |
| ------------------- | ----------- |
| VCC                 | 3.3V        |
| GND                 | GND         |
| CE                  | 9           |
| CSN                 | 10          |
| SCK                 | 13          |
| MOSI                | 11          |
| MISO                | 12          |

> **Note:** Always connect the NRF24L01+PA/LNA module to **3.3V**. Using **5V** may damage the module. Make sure your power supply is stable enough to handle the current draw, especially if the PA is used at higher power settings.

## Setup

1. **Install the Arduino IDE**: [Download Arduino IDE](https://www.arduino.cc/en/software)
2. **Install the RF24 Library**:
   - Open **Arduino IDE**.
   - Go to **Tools > Manage Libraries**.
   - Search for **"RF24"** and install it.
3. **Upload the Code to Arduino**:
   - Connect the **Arduino** to your computer.
   - Make sure to select the **correct port** and **board**.
   - Upload the code to your **Arduino**.

## Usage

Follow these steps to run the project:

1. **Connect the Arduino to your computer**.
2. **Upload the code to Arduino** via the Arduino IDE.
3. Open the **Serial Monitor** to observe the data being sent from the NRF24L01+PA/LNA module.
4. Once the project is running, it will send the message **"Attack started"** every time it starts a new attack.

## Code Explanation

This project uses the **RF24** library to communicate with the **NRF24L01+PA/LNA** module and send data. The module is initialized, and the power amplifier is used to increase transmission power. The code continuously sends data to random channels to create interference.
