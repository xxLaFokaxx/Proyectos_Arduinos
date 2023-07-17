int led_verde = 7;
int led_rojo = 8;

void setup(){
  pinMode (led_verde, OUTPUT);
  pinMode (led_rojo, OUTPUT);
}

void loop() {
  digitalWrite (led_verde, HIGH); // Encender el led
  digitalWrite (led_rojo, LOW); // Apagar el led
  delay (200);

  digitalWrite (led_verde, LOW); // Apagar el led
  digitalWrite (led_rojo, HIGH); // Encender el led
  delay (200);
}
