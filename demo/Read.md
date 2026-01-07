## 🎥 Project Demo Video

**Description of Demonstration:**

In this demo, the working of the Arduino Password-Based Door Lock System is shown in real time.

1. The user enters an **incorrect password three times** using the keypad.
2. After each wrong attempt, the user presses the **`#` key** to submit the password.
3. For every incorrect entry:
   - The LCD displays **“Wrong Password / Access Denied”**
   - The servo motor remains in the locked position
4. After multiple wrong attempts, the system enforces a **10-second lockout period**, during which access is denied.
5. Once the lockout period ends, the user enters the **correct password**.
6. Upon correct entry:
   - The LCD displays **“Access Granted”**
   - The servo motor rotates to unlock the door

This demonstration validates the system’s ability to:
- Prevent unauthorized access
- Handle multiple wrong attempts
- Enforce a timed security delay
- Allow access only after correct password verification
