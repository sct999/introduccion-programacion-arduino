void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperatura = 5;
  
  if(temperatura >0  && temperatura < 15){
    Serial.println("Hace frio!");  
  } else if(temperatura >= 15 && temperatura < 25){
    Serial.println("El clima es agradable");
  } else if(temperatura >= 25 && temperatura < 32){
    Serial.println("El clima es cálido");  
  } else if(temperatura >= 32)
    Serial.println("Me estoy quemando!");
  else
    Serial.println("Congelado?");
    
  delay(1000);  
}

