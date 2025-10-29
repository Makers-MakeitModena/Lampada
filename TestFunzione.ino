// esempio per passare delle variabili in cui la funzione modificherà i valori della variabile
  
  int a=5;
  int b=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  delay(2000);
  // put your main code here, to run repeatedly:
  
  
  cambia(a, b);
  Serial.println("variabile A:");
  Serial.println(a);
  Serial.println("variabile B:");
  Serial.println(b);
}

void cambia( int &a, int &b){
  a=a+3;
  b=b-4;
  return;
  }
