void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 8; i++) {
      pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i++) {
    digitalWrite(i, HIGH);
    delay(100);
  }
  for (int i = 7; i > -1; --i) {
    digitalWrite(i, LOW);
    delay(100);
  }
}
