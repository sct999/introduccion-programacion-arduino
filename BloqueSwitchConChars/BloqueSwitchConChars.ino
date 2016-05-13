void setup() {
  Serial.begin(9600);
}

char letra = 'a';
  
void loop() {

  //Abre la terminal serial y envia una letra o una serie de letras
  if(Serial.available())
    letra = Serial.read();

  switch(letra){
    case 'a': 
      Serial.println("letra a");
    break;

    case 'b': 
      Serial.println("letra b");
    break;

    case 64: //Internamente un char tambien es un numero
      Serial.println("esto es una @?");
    break;

    default: 
      Serial.println("Letra desconocida");
    break;
  }

  delay(1000);
}
