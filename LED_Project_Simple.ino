const int LED1 = 5;
const int LED2 = 4;         
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
    if (counter == 0){
        //Lampu2
        digitalWrite(LED1, HIGH);
        delay(100);
        digitalWrite(LED1, LOW);
        delay(100);
        digitalWrite(LED1, HIGH);
        delay(100);
        digitalWrite(LED1, LOW);
        delay(100);
        counter++;
    } else {
        digitalWrite(LED2, HIGH);
        delay(100);
        digitalWrite(LED2, LOW);
        delay(100);
        digitalWrite(LED2, HIGH);
        delay(100);
        digitalWrite(LED2, LOW);
        delay(100);
        counter--;
    }
  delay(500);
  }
