// the setup function runs once when you press reset or power the board

int pacote[8] = {1, 1, 0, 1, 0, 1, 0, 0};
boolean flag = true;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 8; i++) {
    checkValue(i);
  }
}

void checkValue(int num) {
  if (1 == pacote[num]) {
    func1();
  }
  else {
    func2();
  }
}

void func1() {
  if (flag)
  {
    analogWrite(10, 254);
    flag = false;
    doDelay(1000);
    Serial.println("SOU 1 POSITIVO ");
  }

  else
  {
    analogWrite(10, 1);
    flag = true;
    doDelay(1000);
    Serial.println("SOU 1 NEGATIVO");
  }
  

}

void func2() {

  analogWrite(10, 120);
  doDelay(1000);
  Serial.println("SOU 0");
}

void doDelay(int num) {
  delay(num);
}

