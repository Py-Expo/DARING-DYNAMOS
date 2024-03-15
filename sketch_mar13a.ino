// Define the analog pin for the soil moisture sensor
const int soilMoisturePin = A0;

void setup() {
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Print the soil moisture value to the serial monitor
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  // Add a delay to avoid overwhelming the serial monitor
  delay(1000); // Adjust the delay time as needed
}

