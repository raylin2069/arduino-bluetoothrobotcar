void setup(){
  Serial.begin(9600);                                         
  pinMode(10,INPUT);                                         // Input for motor A
  pinMode(9,INPUT);                                          // Input for motor A
  pinMode(8,INPUT);                                          // Input for motor B
  pinMode(6,INPUT);                                          // Input for motor B
}
  
void loop(){
  if(Serial.available()>0) {
    int data= Serial.read();                             
    Stop();        
  }

  if(data=='R'){
    digitalWrite(10,HIGH);                             // Pin 10 is High for motor A
    digitalWrite(9,LOW);                                // Pin 9 is Low for motor A
    digitalWrite(7,HIGH);                               // Pin 6 is High for motor B
    digitalWrite(8,LOW);                                // Pin 7 is Low for motor B        
  }
  
  else if(data=='L'){
    digitalWrite(10,LOW);                               // Pin 10 is Low for motor A
    digitalWrite(9,HIGH);                               // Pin 9 is High for motor A
    digitalWrite(7,LOW);                                // Pin 6 is Low for motor B
    digitalWrite(8,HIGH);                               // Pin 7 is High for motor B     
  }

  else if(data=='F'){
     digitalWrite(10,LOW);                            // Pin 10 is Low for motor A
     digitalWrite(9,HIGH);                            // Pin 9 is High for motor A
     digitalWrite(7,HIGH);                            // Pin 6 is High for motor B
     digitalWrite(8,LOW);                             // Pin 7 is Low for motor B           
  }

  else if(data=='B'){
    digitalWrite(10,HIGH);                            // Pin 10 is High for motor A
    digitalWrite(9,LOW);                              // Pin 9 is Low for motor A
    digitalWrite(7,LOW);                              // Pin 6 is Low for motor B
    digitalWrite(8,HIGH);                             // Pin 7 is High for motor B          
  }

  void Stop(){
     digitalWrite(10,LOW);                                 // Pin 10 is Low for motor A
     digitalWrite(9,LOW);                                  // Pin 9 is Low for motor A
     digitalWrite(7,LOW);                                  // Pin 6 is Low for motor B
     digitalWrite(8,LOW);                                  // Pin 7 is Low
  }
}
