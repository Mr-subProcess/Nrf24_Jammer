#include <RF24.h>
#include <SPI.h>


RF24 radio(9, 10); // CE and CSN pin number

void setup() {
  
  Serial.begin(9600);
  radio.begin();
  radio.setPALevel(RF24_PA_HIGH);  // PA seviyesini yüksek yap
}

void loop() {

  for (radio.available()) {
    Serial.println("Attack started");
    byte buffer[32];

    //random 
    for (int i = 0; i < 32; i++) {
      buffer[i] = random(0, 255);
    }

    // Start attack
    for (int channel = 0; channel <= 125; channel++) {
      radio.setChannel(channel);  // Kanal ayarı
      for (int attack_try = 0; attack_try < 10; attack_try++) {
        radio.write(&buffer, sizeof(buffer));  // Veriyi gönder
      }
      delayMicroseconds(200);  // Wait 200 microsecond and attack next channel
    }
  }
}
