#define PIN_LED 7
unsigned int count, toggle;

void setup() { // if 0: on 1: off
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  digitalWrite(PIN_LED, 0);
  delay(1000);
}

void loop() {
  for(int i = 0; i < 7; i++){
    delay(100);
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
  }
  while(1){
    digitalWrite(PIN_LED, 1);
    }
}
