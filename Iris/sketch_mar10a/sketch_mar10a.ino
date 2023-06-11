

void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);


}

void loop() {
 if(Serial.available()> 0){
  String  msg = Serial.readString();
  if (msg == "ON"){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else if (msg == "OFF" ){
      digitalWrite(LED_BUILTIN, LOW);
  }
  else if (msg == "BLINK" ){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(2000);
      digitalWrite(LED_BUILTIN, LOW);
  }
 }
}
 /*else{
  digitalWrite(LED_error_pin, HIGH};
  delay(100);
  digitalWrite(Led_error_pin, LOW};
  }*/
  
 
