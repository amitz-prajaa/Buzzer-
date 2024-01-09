int buzzer = 7 ;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(buzzer , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(buzzer , 1);
}
