/*
Gestione pulsante touch con funzione di lettura del fronte in ingresso dell'input.
Cambia stato al fronte di salita dell'input ed evita il rimbalzo dell'input.
Comportamento one shot
*/
#define DEBUG 0
  bool TB1_pressed;
  int Touch1=D1;
  bool TB1_state=false;
  bool TB1_aux=false;
// the setup function runs once when you press reset or power the board
void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Touch1, INPUT); 
  if(DEBUG){
  Serial.begin(115200);
  Serial.println("Starting");
  delay(1000);
  }
}

// the loop function runs over and over again forever
void loop() {

  TB1_pressed = digitalRead(Touch1);
  if (DEBUG){
    Serial.println(TB1_pressed);
    delay(100);
    }
  if ((TB1_pressed)&&(!TB1_aux)) {
    if (DEBUG){Serial.println("cambio di stato!!!");}
      TB1_state = !TB1_state;
  }
  TB1_aux = TB1_pressed;
  digitalWrite(LED_BUILTIN, TB1_state);
}
