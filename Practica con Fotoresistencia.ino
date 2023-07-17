int azul =7;
int verde = 8;
int pinldr = 0;
int valorldr = 0;

void setup(){
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(verde,  LOW);
  digitalWrite(azul,  LOW);
    valorldr = analogRead (pinldr);
Serial.println(valorldr);
if(valorldr > 1000){
 digitalWrite(verde, HIGH);
}else{
 digitalWrite(azul,HIGH);
}
 delay(200);
}
