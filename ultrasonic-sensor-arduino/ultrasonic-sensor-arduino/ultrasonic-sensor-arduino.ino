
const int trigPin = 9;
const int echoPin = 10;
const int led = 13;

long duration;
int distance;
int safetyDistance;


void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}


void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

safetyDistance = distance;

if (safetyDistance <= 10){
  digitalWrite(led, HIGH);
  
}
else{
  digitalWrite(led, LOW);
  
  
}
Serial.print("Distance: ");
Serial.println(distance);
delay(400);

}
