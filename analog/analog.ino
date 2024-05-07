//ANALOG READ FOR 5V

//const int analogPin = A0;  // Analog input pin on Arduino
//const float voltage = 5.0; // Voltage across the component in volts
//
//void setup() {
//  Serial.begin(9600); // Initialize serial communication
//}
//
//void loop() {
//  // Read analog input in milliamps
//  int analogReading = analogRead(analogPin);
//
//  // Map the analog reading to a specific range (e.g., 0 to 1000)
//  float current_mA = map(analogReading, 0, 1023, 0, 1000) / 1000.0;
//
//  // Calculate power in watts using P = VI
//  float power_W = current_mA * voltage;
//
//  // Print the results
//  Serial.print("Analog Reading (raw): ");
//  Serial.print(analogReading);
//  Serial.print(", Current (mA): ");
//  Serial.print(current_mA * 1000); // Convert back to mA for display
//  Serial.print(", Power (W): ");
//  Serial.println(power_W);
//
//  delay(3000); // Pause for readability, adjust as needed
//}


//ANALOG READ FOR 3.3V

//const int analogPin = A0;  // Analog input pin on Arduino
//const float voltageMax = 3.3; // Maximum voltage range
//
//void setup() {
//  Serial.begin(9600); // Initialize serial communication
//}
//
//void loop() {
//  // Read analog input
//  int analogReading = analogRead(analogPin);
//
//  // Map the analog reading to the voltage range (0 to 3.3V)
//  float voltage = map(analogReading, 0, 1023, 0, voltageMax);
//
//  // Print the results
//  Serial.print("Analog Reading (raw): ");
//  Serial.print(analogReading);
//  Serial.print(", Voltage (V): ");
//  Serial.println(voltage);
//
//  delay(1000); // Pause for readability, adjust as needed
//}


//DigitalRead for 5v or 3.3v

//int digitalPin = 4;    // Digital input pin on Arduino (adjust as needed)
//float voltageMax = 3.3; // Maximum voltage range
//
//void setup() {
//  Serial.begin(9600); // Initialize serial communication
//  pinMode(digitalPin, INPUT);
//}
//
//void loop() {
//  // Read digital input
//  int digitalValue = digitalRead(digitalPin);
//
//  // Map the digital value to the voltage range (0 to 5V)
//  float voltage = map(digitalValue, LOW, HIGH, 0, voltageMax);
//
//  // Print the results
//  Serial.print("Digital Value: ");
//  Serial.print(digitalValue);
//  Serial.print(", Voltage (V): ");
//  Serial.println(voltage);
//
//  delay(1000); // Pause for readability, adjust as needed
//}
