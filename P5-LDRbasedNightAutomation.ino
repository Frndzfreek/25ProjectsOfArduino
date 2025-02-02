//Here we see the glow of LED when it turns dark after measuring the threshold of the environment
const int ldrPin = A0; 
const int ledPin = 9;
int threshold = 600;//Update the value which shows in your Serial monitor

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
