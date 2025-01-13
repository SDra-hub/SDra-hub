int PIR = 27;
int LED = 26;

void setup() {
  pinMode (PIR, INPUT);
  pinMode (LED, OUTPUT);
  
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  int PIRValue = digitalRead (PIR);
  
  if (PIRValue == HIGH) {
    digitalWrite (LED, HIGH);
    Serial.println("Pohyb detekovaný!");// put your main code here, to run repeatedly:

  }else {
  digitalWrite (LED, LOW);
  }
delay (200);
}