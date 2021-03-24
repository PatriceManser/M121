const int a = 440;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(1 == HIGH) {
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(4, LOW);
  }

  if(2 == HIGH) {
    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
  }

  if(1 == HIGH && 2 == HIGH || 1 == HIGH && 3 == HIGH) {
    digitalWrite(6, HIGH);
    tone(7, 440, 5000);
    digitalWrite(6, LOW);
  }
}
