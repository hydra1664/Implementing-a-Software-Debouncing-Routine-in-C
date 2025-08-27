#define BUTTON_PIN 2
#define LED_PIN 13
#define DEBOUNCE_DELAY 20

int lastButtonState = HIGH;
int ledState = LOW;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int currentButtonState = digitalRead(BUTTON_PIN);

  if (currentButtonState == LOW && lastButtonState == HIGH) {
    delay(DEBOUNCE_DELAY);
    currentButtonState = digitalRead(BUTTON_PIN);
    if (currentButtonState == LOW) {
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState);
    }
  }

  lastButtonState = currentButtonState;
}
