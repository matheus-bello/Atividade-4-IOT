int buttonPin = 7;
int ledPin1 = 10;
int ledPin2 = 8;

int estado = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {

    estado++;

    if (estado > 2) {
      estado = 0;
    }

    if (estado == 0) {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }

    if (estado == 1) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
    }

    if (estado == 2) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
    }

    delay(500);
  }
}
