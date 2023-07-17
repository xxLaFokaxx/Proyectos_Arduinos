int verde=7;
int rojo=8;
int amarillo=4;

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(amarillo,OUTPUT);
  
}

void loop() {
  digitalWrite(rojo,LOW);
  digitalWrite(verde, HIGH);
  delay(5000);
  for(int i=0;i<4;i++){
    digitalWrite(verde,HIGH);
    delay(500);
    digitalWrite(verde,LOW);
    delay(500);
    }
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH);
  delay(2000);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, HIGH);
  delay(5000);

}
