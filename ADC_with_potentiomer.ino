void setup() {
  // initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read the analog value
  int sensorValue = analogRead (A0);
  int voltageValue = (sensorValue * (5.0 / 1023));
  //print analog value in serial monitor
  Serial.print("Voltage Value: ");
  Serial.print(voltageValue);
  Serial.println(" V");
  delay(1);
  exit(0);
}
