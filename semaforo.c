const int ledVerde = 10;
const int ledAmarelo = 11;
const int ledVermelho = 12;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  delay(2000);
  digitalWrite(ledVerde, LOW);
  
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  
  digitalWrite(ledVermelho, HIGH);
  delay(3000);
  digitalWrite(ledVermelho, LOW);
}
