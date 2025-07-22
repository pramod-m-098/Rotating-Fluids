const int dp = 2;
const int sp = 3;

void setup() {
  pinMode(dp, OUTPUT);
  pinMode(sp, OUTPUT);
  digitalWrite(dp, HIGH);
}

void loop() {
  digitalWrite(sp, HIGH);
  delayMicroseconds(500);
  digitalWrite(sp, LOW);
  delayMicroseconds(500);
}
