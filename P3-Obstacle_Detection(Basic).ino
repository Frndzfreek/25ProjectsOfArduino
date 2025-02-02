//HERE IS THE CODE FOR DETECTING ANY HINDRANCE USING ULTRASONIC SENSOR WITH PIEZO BUZZER IN ARDUINO:
//initialising the inputs

#define echo 12
#define trig 13
const int buzz = A0;
int c;
//Setting up the void setup():

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}
//Setting up the void loop():

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long allTime = pulseIn(echo, HIGH);

  int distance = allTime * 0.0343 / 2; 
  Serial.print("Distance = ");
  Serial.println(distance);
  
  if (distance >00 && distance <= 50) {
    c = map(distance, 0, 50, 255, 0);
    analogWrite(buzz, c);
  } 
  else {
    analogWrite(buzz, 0);
  }
  
  delay(50);
}
