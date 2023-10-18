void setup() {
  pinMode(13, OUTPUT); // Configura o pino 13 como saída
}

void loop() {
  fast();
  fast();
  fast();

  delay(400);

  slow();
  slow();
  slow();

  delay(400);
  
  fast();
  fast();
  fast();

  delay(600);
}

void fast(){
  digitalWrite(13, HIGH); // Liga o LED
  delay(100); // Aguarda 1 segundo
  digitalWrite(13, LOW); // Desliga o LED
  delay(100); // Aguarda 1 segundo
}

void slow(){
  digitalWrite(13, HIGH); // Liga o LED
  delay(500); // Aguarda 1 segundo
  digitalWrite(13, LOW); // Desliga o LED
  delay(100); // Aguarda 1 segundo
}