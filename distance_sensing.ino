long duration; 
int distance; 

int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
int Red;
int Green;
int Blue;

void setup() {
  pinMode(3 , OUTPUT); 
  pinMode(2, INPUT); 
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(3, LOW);
  delay(250);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  duration = pulseIn(2, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
	
	if (distance <= 10){
	  Red = 254;
		Green = 0;
		Blue = 0;
   }
   
   if ((distance> 10) && (distance<= 30)) {
		Red = 254;
		Green = 50;
		Blue = 0;
   }
   if ((distance > 30) && (distance <= 50)) {
		Red = 0;
		Green = 254;
		Blue = 0;
   }
   analogWrite(redPin, Red);
	analogWrite(bluePin, Blue);
	analogWrite(greenPin, Green);
}
