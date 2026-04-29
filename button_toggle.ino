const int BUTTON_PIN = 2;
const int LED_PIN = 13;

bool ledState = false;
int lastButtonState = HIGH;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  

  if (lastButtonState == HIGH && buttonState == LOW) {
    Serial.println("Button Press Detected");

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    delay(200);
  } 
  lastButtonState = buttonState;
  }
