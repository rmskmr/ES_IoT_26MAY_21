void setup() {
  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

int i = 0;
int j = -3;
void loop() {
  digitalWrite(i, 1);
  digitalWrite(i - 3, 0);
  delay(250);
}
