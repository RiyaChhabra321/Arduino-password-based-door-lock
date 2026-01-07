## 📸 Project Proof & Working Screenshots

This section demonstrates the working of the **Arduino Password-Based Door Lock System** using real-time LCD messages and servo motor behavior.

---

### 🔹 Step 1: System Startup
![System Startup](startup.png)

**Description:**  
When the system is powered ON, the LCD initializes successfully and displays a startup message indicating that the door lock system is ready to accept input.

---

### 🔹 Step 2: Password Entry
![Password Entry](password_entry.png)

**Description:**  
The user enters the password using the 4×4 keypad.  
Each key press is detected and processed by the Arduino, while the LCD guides the user during input.

---

### 🔹 Step 3: Access Granted
![Access Granted](access_granted.png)

**Description:**  
If the entered password matches the stored password:
- The LCD displays **“Access Granted”**
- The servo motor rotates to unlock the door
- The system allows entry

---

### 🔹 Step 4: Access Denied
![Access Denied](access_denied.png)

**Description:**  
If an incorrect password is entered:
- The LCD displays **“Access Denied”**
- The servo motor remains in the locked position
- Unauthorized access is prevented

---

## ✅ Conclusion
These screenshots confirm the correct functioning of:
- Keypad input handling
- Password verification logic
- LCD status display
- Servo motor-based locking mechanism

