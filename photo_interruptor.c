/*
    Project name : Photo interruptor sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-photo-interruptor-sensor
*/

// Define the digital pin connected to the photo interrupter sensor
#define PHOTO_INTERRUPTER_PIN 2

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set up the photo interrupter sensor pin as an input
  pinMode(PHOTO_INTERRUPTER_PIN, INPUT);

  // Print initial message to serial monitor
  Serial.println("Photo Interrupter Sensor Example");
  Serial.println("Reading sensor status...");
}

void loop() {
  // Read the digital value from the photo interrupter sensor
  int sensorValue = digitalRead(PHOTO_INTERRUPTER_PIN);

  // Check if the sensor is blocked or unblocked
  if (sensorValue == HIGH) {
    Serial.println("Sensor Blocked");
  } else {
    Serial.println("Sensor Unblocked");
  }

  // Add a delay before taking the next reading
  delay(1000);
}
