
float temp;
float temperature;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
temp = analogRead(A0);
temperature = temp * 0.48828125;
Serial.print("TEMPERATURE: ");
Serial.print(temperature);
Serial.print("*C");
Serial.println();
delay(1000);


}
