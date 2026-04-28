# bridge-embedded-system-reaction master game
# 🎮 Reaction Master Game (Arduino)

## 📌 Project Overview
Reaction Master is a simple and interactive Arduino-based game that tests a player's reaction speed.  
The system uses an LED as a visual signal and a buzzer for sound feedback, creating a fun and engaging experience.

Players must press a button as quickly as possible when the LED turns on. Pressing too early results in a penalty.

---

## 🎯 Objectives
- Measure human reaction time using Arduino
- Provide real-time feedback using LED and buzzer
- Demonstrate timing, randomness, and input handling
- Create an interactive embedded system project

---

## ⚙️ Components Used
- Arduino (Uno / Mega 2560)
- Breadboard
- LED (visual signal)
- Buzzer (sound feedback)
- Push button
- Resistors (220–470Ω for LED, 10kΩ for button)
- Jumper wires

---

## 🔌 System Behavior

### ⏳ Waiting Phase
- System waits for a random time (2–5 seconds)
- A short beep signals readiness

### 💡 Signal Phase
- LED turns ON
- Player must react quickly

### ✅ Correct Reaction
- Player presses button after LED turns ON
- Reaction time is measured and displayed
- Buzzer produces short success beeps

### ❌ False Start
- Player presses button before LED turns ON
- Error sound is played
- Player must try again

---

## 🧠 How It Works
- The Arduino generates a random delay to prevent prediction
- When the LED turns ON, a timer starts using `millis()`
- Button press stops the timer
- Reaction time is calculated and displayed via Serial Monitor
- Buzzer provides feedback for different events

---

## 💻 Code Features
- Random delay generation
- Real-time reaction time measurement
- Sound feedback using `tone()`
- False start detection logic

---

## 🔧 Circuit Connections

### LED
- Pin 3 → Resistor → LED → GND

### Button
- Pin 7 → Button → 5V  
- Pin 7 → 10kΩ Resistor → GND

### Buzzer
- Pin 6 → Buzzer → GND

---

## 🛠️ Simulation
This project can be simulated using Tinkercad:
- Press the button to interact
- Observe LED and buzzer responses

---

## 🚀 Future Improvements
- Add LCD display for reaction time
- Add score tracking system
- Create 2-player competitive mode
- Add difficulty levels (faster signals)

---

## 📚 Learning Outcomes
- Understanding of digital input/output
- Timing using `millis()`
- Event-driven programming
- Circuit design and debugging
- Human-computer interaction basics

---

## 👤 Author
**Ineza Shafi**  
Computer Systems and Architecture (CSA)

---

## 📅 Date
April 2026
