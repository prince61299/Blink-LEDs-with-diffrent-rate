//initalizing the ledpins
int ledPin1 = 2; 
int ledPin2 = 3;
int ledPin3 = 4;

const int a = 1, b = 2, c = 3;
int t = 1;
int timeDelay = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {

  if(t % a == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(100);
    digitalWrite(ledPin1, LOW);
  }
  
  if(t % b == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW); 
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
  
  if(t % c == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(100);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW); 
  }
  
  t++;
  delay(1000);
}
