// the setup function runs once when you press reset or power the board
int num = 0;
int salva = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 int num = digitalRead(11);
 
 if (num != salva){
  Serial.println(num);

  salva = num;
 }

 digitalWrite(13,num);

 

 
 
}



