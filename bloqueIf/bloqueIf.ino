void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperatura = 45.25;
  
  if(temperatura >= 30){
    Serial.println("La temperatura es muy alta, encender ventilador");  
  }

  Serial.println("La temperatura no es muy alta, apaga el ventilador!");

  delay(1000);  
}



