// Lab 8 - Graphing sensor data on a PC
// This code is supposed to show the changes in the graph for a Photoresistor and a Potentiometer on the same graph.
// Youtube link - https://youtu.be/IgZgEvdhBwM

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
}

void loop() {
  // send the value of analog input 0 (Potentiometer):
  Serial.println(analogRead(A0));
  // send the value of analog input 1 (Photoresistor):
  Serial.println(analogRead(A1));
  // delay for 2 milliseconds
  delay(2);
}
