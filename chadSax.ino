int ledR = 9;           // the PWM pin the LED is attached to
int ledB = 6;           // the PWM pin the LED is attached to
int ledG = 11;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int bOffset = 0;
int gOffset = 0;

int modePin = 123;   ////////////// 
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(modePin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int mode = 0;
  int reading = digitalRead(modePin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
      mode++;
        
      }
    }
  }
  lastButtonState = reading;
  
  switch (mode){
    case 0:
      Serial.print("mode 1");
      break;
    case 1:
      Serial.print("mode 2");
      break;
    case 2:
      Serial.print("mode 3");
      break;
    case 3:
      Serial.print("mode 4");
      break;
    default:
      Serial.print("mode default");
      break;
  }
}
