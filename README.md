# Password-Based Door Lock System using Arduino

A secure embedded system project that implements a password-protected door lock using an Arduino, 4×4 matrix keypad, 16×2 LCD, and a servo motor.  
The system provides real-time user feedback, limited access attempts, and automatic locking functionality.

---

## 📌 Features
- Password-based authentication
- Masked password input on LCD
- `*` key to clear input
- `#` key to submit password
- Maximum 3 incorrect attempts
- Temporary system lock after failures
- Servo-based door locking mechanism
- Automatic relock after access

---

## 🧰 Components Used
- Arduino Uno
- 16×2 LCD Display
- 4×4 Matrix Keypad
- Servo Motor (SG90)
- Resistors (220Ω, 1kΩ)
- Breadboard & Jumper Wires

---

## ⚙️ Working Principle
1. User enters password via keypad.
2. LCD displays masked input.
3. System verifies password:
   - Correct → Door unlocks (servo rotates).
   - Incorrect → Access denied message.
4. After 3 wrong attempts, system locks temporarily.
5. Door auto-locks after a delay.

---

## 🖥️ Circuit Diagram
📁 `circuit-diagram/`

> Includes LCD, keypad, servo, and Arduino wiring.

---

## 🎥 Demo
📁 `demo/`

> Video demonstration of working system and LCD output.

---

## 🧠 Skills Gained
- Embedded C / Arduino programming
- LCD interfacing
- Matrix keypad scanning
- Servo motor control
- Hardware debugging
- Embedded system design

---

## 🚀 Future Improvements
- EEPROM-based password storage
- RFID or biometric authentication
- Buzzer or alarm system
- IoT-based access logging
- Mobile app integration

---

## 📌 Author
**Riya Chhabra**  
Electronics & Communication Engineering Student

---

⭐ If you found this project useful, feel free to star the repository!
