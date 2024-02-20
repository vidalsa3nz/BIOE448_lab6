void setup() {
  // put your setup code here, to run once:
  cont int sensor_pin = 0;
  int pulse_signal = 0;
  float BPM = 0;
  Serial.begin(9600);
}

void loop() {
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);
  // put your main code here, to run repeatedly:

}
