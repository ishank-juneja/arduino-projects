int latchPin = 9;
int dataPin = 8;
int clockPin = 10;
const long data1 = 0b000010000000000001000000;
const long data2 = 0b000010000000000000100000;
const long data3 = 0b000010000000000000010000;
const long data4 = 0b000010000000000000001000;
const long data5 = 0b000010000000000000000100;
const long data6 = 0b000010000000000000000010;
const long data7 = 0b000010000000000000000001;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data1);
  shiftOut(dataPin, clockPin, LSBFIRST, (data1 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data1 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
   digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data2);
  shiftOut(dataPin, clockPin, LSBFIRST, (data2 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data2 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
    digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data3);
  shiftOut(dataPin, clockPin, LSBFIRST, (data3 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data3 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
    digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data4);
  shiftOut(dataPin, clockPin, LSBFIRST, (data4 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data4 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
   digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data5);
  shiftOut(dataPin, clockPin, LSBFIRST, (data5 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data5 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
    digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data6);
  shiftOut(dataPin, clockPin, LSBFIRST, (data6 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data6 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
    digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data7);
  shiftOut(dataPin, clockPin, LSBFIRST, (data7 >> 8));
  shiftOut(dataPin, clockPin, LSBFIRST, (data7 >> 16));
  digitalWrite(latchPin, HIGH);
  delay(500);
}
