const int  buttonPin = 2;    // the pin that the pushbutton is attached to
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


int ledRChannel1 = 3;
int ledBChannel1 = 5;
int ledGChannel1 = 6;
int ledRChannel2 = 9;
int ledBChannel2 = 10;
int ledGChannel2 = 11;

int LevelRChannel1 = 0;
int LevelBChannel1 = 0;
int LevelGChannel1 = 0;
int LevelRChannel2 = 0;
int LevelBChannel2 = 0;
int LevelGChannel2 = 0;

int PTMMode = 8;
int PTMSpeed = 7;
int PTMSpare = 6;

int currMode = 0;

void setup() {
  // initialize the button pin as a input:
  pinMode(PTMMode, INPUT);
  pinMode(PTMSpeed, INPUT);
  pinMode(PTMSpare, INPUT);

  pinMode(ledRChannel1, OUTPUT);
  pinMode(ledBChannel1, OUTPUT);
  pinMode(ledGChannel1, OUTPUT);
  pinMode(ledRChannel2, OUTPUT);
  pinMode(ledBChannel2, OUTPUT);
  pinMode(ledGChannel2, OUTPUT);  
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
      currMode++;
        
      }
    }
  }
  lastButtonState = reading;

  switch (currMode){
    int temp = 0;
    case 1:
      //function
      temp = 0;
    case 2:
      //function
      temp = 0;
    default:
      //gentle fade
      temp = 0;
  }
  
}


void twoChanelWhiteFade() {
  for(int j = 0; j < 256; j++){
      analogWrite(ledRChannel1, j);
      analogWrite(ledBChannel1, j);
      analogWrite(ledGChannel1, j);
      analogWrite(ledRChannel2, 256-j);
      analogWrite(ledBChannel2, 256-j);
      analogWrite(ledGChannel2, 256-j);
      delay(3);
    }
}

void randomFadesTogether(){
  //randomly pick a value for each colour 
  //randomly pick a colour
  //increase from current to picked 
  //once hit pick a new value for that colour

  //randomly pick a colour 
  //increase from current to picked
  //once hit pick a new value

  int destinationValueR = ceil(rand() * 256);
  int destinationValueB = ceil(rand() * 256);
  int destinationValueG = ceil(rand() * 256);

  int workingColour = ceil(rand() * 3);//does arduino have an enumeration equivalent
  int currentLEDValue = 1;//getLEDValue();
  int selectedDestination = destinationValueR;
  if (currentLEDValue != selectedDestination) {
      int difference = selectedDestination - currentLEDValue;
      if (difference > 0) {
        
        } else {
          
        }
      
    } else{
      
    }
  
  }

void randomFadesSeparate(){
  
  }

//Fade In and Fade Out /rgb or random colours
/*
void fades()
for(int j = 0; j < 3; j++ ) { 
    // Fade IN
    for(int k = 0; k < 256; k++) { 
      switch(j) { 
        case 0: setAll(k,0,0); break;
        case 1: setAll(0,k,0); break;
        case 2: setAll(0,0,k); break;
      }
      showStrip();
      delay(3);
    }
    // Fade OUT
    for(int k = 255; k >= 0; k--) { 
      switch(j) { 
        case 0: setAll(k,0,0); break;
        case 1: setAll(0,k,0); break;
        case 2: setAll(0,0,k); break;
      }
      showStrip();
      delay(3);
    }
  }



void Strobe(byte red, byte green, byte blue, int StrobeCount, int FlashDelay, int EndPause){
  for(int j = 0; j < StrobeCount; j++) {
    setAll(red,green,blue);
    showStrip();
    delay(FlashDelay);
    setAll(0,0,0);
    showStrip();
    delay(FlashDelay);
  }
 
 delay(EndPause);
}

void 2partFollow()


  
*/
