void setup() {
  Serial.begin(9600);
}

void loop() {
  int botonesPresionados = 21;

  switch(botonesPresionados){
    case 1: 
      Serial.println("Un boton presionado");
    break;

    case 20: 
      Serial.println("20 botones presionados... es posible?");
    break;

    case 4: 
      Serial.println("4 botones presionados!");
    break;

    default: 
      Serial.println("Ni 1, ni 20, ni 4");
    break;
  }

  delay(1000);
}
