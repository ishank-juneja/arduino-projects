#include <IRremote.h>

IRsend irsend;

const int b1  = 4;  //on/off
const int b2  = 5;  //fan low
const int b3  = 6;  //fan med
const int b4  = 7;  //fan high
const int b5  = 8;  //temp incr
const int b6  = 9;  //temp decr
const int b7  = 10; //AC timer
const int IR_LED = 3;

void setup() {
  pinMode(IR_LED, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(b5, INPUT);
  pinMode(b6, INPUT);
  pinMode(b7, INPUT);
}

void loop() {
  attachInterrupt(0, wakeUp, HIGH);
  while (timer < 10000) {
    if (digitalRead(b1) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xA4B2955B, 32);
    }

    if (digitalRead(b2) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFD50AF, 32);
    }

    if (digitalRead(b3) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFDCA35, 32);
    }

    if (digitalRead(b4) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFD7887, 32);
    }

    if (digitalRead(b5) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFD4AB5, 32);
    }

    if (digitalRead(b6) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFD58A7 , 32);
    }

    if (digitalRead(b7) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0xFDA25D, 32);
    }

    delay(1);
    timer = timer + 1;

  }
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
}
