```cpp
#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>

#define PASSWORD_LENGTH 4
#define MAX_ATTEMPTS 3

// LCD
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

// Servo
Servo doorServo;
int servoPin = 10;

// Password
char correctPassword[PASSWORD_LENGTH + 1] = "1234";
char enteredPassword[PASSWORD_LENGTH + 1];
byte index = 0;
byte attempts = 0;

// Keypad
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {0, 1, 2, 3};
byte colPins[COLS] = {4, 5, 6, 7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  lcd.begin(16, 2);
  doorServo.attach(servoPin);
  doorServo.write(0);  // Locked position

  lcd.print("Enter Password");
  lcd.setCursor(0, 1);
}

void loop() {
  char key = keypad.getKey();

  if (key) {

    // CLEAR INPUT
    if (key == '*') {
      clearInput();
    }

    // ENTER / SUBMIT
    else if (key == '#') {
      checkPassword();
    }

    // PASSWORD INPUT
    else if (index < PASSWORD_LENGTH) {
      enteredPassword[index] = key;
      lcd.print('*');
      index++;
    }
  }
}

void checkPassword() {
  enteredPassword[index] = '\0';

  if (strcmp(enteredPassword, correctPassword) == 0) {
    accessGranted();
  } else {
    accessDenied();
  }
}

void accessGranted() {
  lcd.clear();
  lcd.print("Access Granted");

  doorServo.write(90);  // Open door
  delay(5000);

  doorServo.write(0);   // Close door
  delay(1000);

  attempts = 0;
  resetSystem();
}

void accessDenied() {
  attempts++;
  lcd.clear();
  lcd.print("Wrong Password");
  delay(2000);

  if (attempts >= MAX_ATTEMPTS) {
    systemLocked();
  } else {
    resetSystem();
  }
}

void systemLocked() {
  lcd.clear();
  lcd.print("System Locked");
  lcd.setCursor(0, 1);
  lcd.print("Wait 10 sec");

  delay(10000);  // Lockout time
  attempts = 0;
  resetSystem();
}

void clearInput() {
  index = 0;
  lcd.clear();
  lcd.print("Enter Password");
  lcd.setCursor(0, 1);
}

void resetSystem() {
  clearInput();
}
```
