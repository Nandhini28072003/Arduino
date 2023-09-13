void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()>0)
  {
    String data = Serial.readString();
    data.trim();
    if (data=="a"){
        digitalWrite(12,HIGH);

    }
    else if (data=="b"){
        digitalWrite(12,LOW);

    }
  }
}
  
