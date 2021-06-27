void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float random1 = random(1000)/1000.00;
  Serial.println(random1);
  delay(1000);
}
