const int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int delayval=analogRead(sensorPin);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayval);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayval);
}
