
int sound = 5;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(sound, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(sound, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(sound, LOW);
  delay(1000);
}
