#define ledR 8
#define ledG 10
#define ledB 9

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);

}

void loop() {
  digitalWrite(ledR, HIGH);
  delay(1000);
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  delay(1000);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
  delay(1000);
  digitalWrite(ledB, LOW);
  delay(1000);

  
}
