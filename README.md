# 🌪️ Rotating Fluids — CH211P Lab Project

> *A mesmerizing dive into the dynamics of spinning water and vortex formation using Arduino-powered systems!*  
> **Group 7** | **IIT Tirupati** | CH211P - Fluid Mechanics & Heat Transfer Laboratory

![Vortex](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Water_vortex.gif/480px-Water_vortex.gif)  
<sub>Visualizing vortex motion in rotating fluids</sub>

---

## 📂 Arduino Sketch – Stepper Motor Control

This sketch controls the stepper motor to create **uniform rotation** in the rotating fluid experiment.

```cpp
// Rotating Fluid Vortex Experiment - Stepper Motor Control
// Uses A4988 Driver and NEMA17 Stepper with Arduino UNO

const int dirPin = 2;
const int stepPin = 3;

int speedMicroseconds = 500;

void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  digitalWrite(dirPin, HIGH);
}

void loop() {
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(speedMicroseconds);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(speedMicroseconds);
}
```

---

## 🧪 Experiment Procedure

1. 🔧 Assemble the circuit on a breadboard.  
2. 🧲 Fix a transparent cylinder onto the motor.  
3. 💧 Fill the cylinder with water; inject dye at the wall.  
4. ⚡ Power the Arduino and observe fluid motion.  
5. 📸 Record dye paths and surface shape.

🎥 **Expected Visuals**:
- Parabolic water surface 🥣  
- Rotating dye forming spiral/vortex patterns 🎨  
- Curved tracer paths due to Coriolis effect 💫

---

## 📈 Results & Insights

✔️ Paraboloid surface formed at equilibrium  
✔️ Uniform angular motion observed  
✔️ Dye paths curve due to Coriolis effects  
✔️ Ekman layers visible near the boundaries

🧠 *Viscosity plays a role in how fast the fluid reaches uniform rotation.*

---

## 🌍 Real-World Applications

🔁 **Mixing Tanks** – Consistent industrial mixing  
⚙️ **Centrifuges** – Phase separation in labs and factories  
🌪️ **Cyclones** – Meteorological simulations  
🚀 **Spacecraft** – Fluid behavior in rotating tanks

---

## 🎓 Credits

**Team Members – Group 7**  
- M Kedhar Reddy (CH23B024)  
- Mayank Dhyawana (CH23B023)  
- M Pramod (CH23B022)

👨‍🏫 *Under the guidance of Prof. Anki Reddy Katha & Dr. Narendra Singh*  
📍 Department of Chemical Engineering, IIT Tirupati

---

## 📚 References

- [arXiv:1902.07082](https://arxiv.org/abs/1902.07082) – 2D Rigid Body Fluid Dynamics  
- [arXiv:1405.6596](https://arxiv.org/abs/1405.6596) – Viscous Cavities  
- [ScienceDirect: Vortex Flow](https://www.sciencedirect.com/topics/engineering/vortex-flow)  
- [A4988 + Arduino Guide](https://racheldebarros.com/arduino-projects/control-nema17-with-a4988-arduino-wiring-and-code-guide/)

---

## 🚀 Try It Yourself!

Fork this repo, upload the `.ino` to your Arduino, build the setup, and start spinning fluid physics from your desk!  
🎯 *Make physics visible. Make it fun.*
