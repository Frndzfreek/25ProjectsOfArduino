const int irSensor = 2;
const int ledPin = 3;
const int buzzerPin = 4;
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup(){
  pinMode(irSensor,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  if (digitalRead(irSensorPin)==HIGH){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034/2;
  if(distance<100){
    tone(buzzerPin,1000);
  }
  else{
    noTone(buzzerPin);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(10);
}
