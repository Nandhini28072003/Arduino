int temp = A0;
int gas = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int temperature = analogRead(temp);
  int gas_level = analogRead(gas);
  String gas_value = "Gas Level : " + String(gas_level);
  String temp_value = "Temperature : " + String(temperature);
  Serial.println(temp_value);
 
  delay(2000);
  Serial.println(gas_value);
  delay(2000);
 

}
