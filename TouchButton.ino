/*
Primo esempio di test per il touch button

*/
#define DEBUG 1
  int inputState;
  int Touch1=D1;
// the setup function runs once when you press reset or power the board
void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Touch1, INPUT); 
  Serial.begin(115200);
 // Serial.print

  Serial.println("Starting");
  delay(1000);
}

// the loop function runs over and over again forever
void loop() {

  inputState = digitalRead(Touch1);
  Serial.println(inputState);
  delay(1000);
  if (inputState == 1) {
    if (DEBUG)Serial.println("touched!");
    digitalWrite(LED_BUILTIN, HIGH);
    } else {
      if (DEBUG)Serial.println("Nothing");
      digitalWrite(LED_BUILTIN, LOW);
      }
}
