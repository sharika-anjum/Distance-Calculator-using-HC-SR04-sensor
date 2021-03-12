#define ech 2 
#define trig 3

long time; 
int distance; 

void setup() {
  pinMode(trig, OUTPUT); 
  pinMode(ech, INPUT); 
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(1);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time = pulseIn(ech, HIGH);
  distance = time * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}