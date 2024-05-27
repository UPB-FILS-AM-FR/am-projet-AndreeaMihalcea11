#include <Servo.h>

// Define pins for ultrasonic sensors
#define trigPin_plastic 37
#define echoPin_plastic 36
#define trigPin_metal 39
#define echoPin_metal 38

// Define pins for proximity sensors
#define plasticsensor A0
#define metalsensor A1

Servo myservo; // create servo object to control a servo on plastic bin
Servo myservo_M; // create servo object to control a servo on metal bin
int pos = 165; // default servo position of plastic bin
int pos_M = 158; // default servo position of metal bin

void setup() {
  myservo.attach(11); // attaches the plastic bin servo on pin 11 to the servo object
  myservo_M.attach(12); // attaches the metal bin servo on pin 12 to the servo object
  
  // Proximity sensors
  pinMode(plasticsensor, INPUT_PULLUP);
  pinMode(metalsensor, INPUT_PULLUP);
  
  // Ultrasonic sensors
  pinMode(trigPin_plastic, OUTPUT);
  pinMode(echoPin_plastic, INPUT);
  pinMode(trigPin_metal, OUTPUT);
  pinMode(echoPin_metal, INPUT);

  // Start serial monitor
  Serial.begin(9600);
}

void loop() {
  // Read proximity sensors
  int sensor_read_plastic = digitalRead(plasticsensor);
  int sensor_read_metal = digitalRead(metalsensor);

  // Read ultrasonic sensors
  long distance_plastic = getDistance(trigPin_plastic, echoPin_plastic);
  long distance_metal = getDistance(trigPin_metal, echoPin_metal);

  Serial.print("Plastic sensor: ");
  Serial.println(sensor_read_plastic);
  Serial.print("Metal sensor: ");
  Serial.println(sensor_read_metal);
  Serial.print("Distance to plastic bin (cm): ");
  Serial.println(distance_plastic);
  Serial.print("Distance to metal bin (cm): ");
  Serial.println(distance_metal);

  // Check if the plastic bin sensor is triggered
  if (sensor_read_plastic == LOW || distance_plastic <= 5) {
    Serial.println("Opening plastic bin...");
    openPlasticBin();
  }

  // Check if the metal bin sensor is triggered
  if (sensor_read_metal == LOW || distance_metal <= 5) {
    Serial.println("Opening metal bin...");
    openMetalBin();
  }

  // Small delay to avoid flooding the serial monitor
  delay(500);
}

void openPlasticBin() {
  for (pos = 160; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15); // waits 15ms for the servo to reach the position
  }
  delay(2000); // wait for 2 seconds before closing the lid
  for (pos = 0; pos <= 160; pos += 1) {
    myservo.write(pos);
    delay(15); // waits 15ms for the servo to reach the position
  }
}

void openMetalBin() {
  for (pos_M = 160; pos_M >= 0; pos_M -= 1) {
    myservo_M.write(pos_M);
    delay(15); // waits 15ms for the servo to reach the position
  }
  delay(2000); // wait for 2 seconds before closing the lid
  for (pos_M = 0; pos_M <= 160; pos_M += 1) {
    myservo_M.write(pos_M);
    delay(15); // waits 15ms for the servo to reach the position
  }
}

long getDistance(int trigPin, int echoPin) {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  long distance = duration * 0.034 / 2;

  return distance;
}
