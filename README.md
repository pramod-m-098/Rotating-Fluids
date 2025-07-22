# 🌪️ Rotating Fluids — CH211P Lab Project

> *A mesmerizing dive into the dynamics of spinning water and vortex formation using Arduino-powered systems!*  
> **Group 7** | **IIT Tirupati** | CH211P - Fluid Mechanics & Heat Transfer Laboratory

![Vortex](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Water_vortex.gif/480px-Water_vortex.gif)  
<sub>Visualizing vortex motion in rotating fluids</sub>

---

## 🔍 Project Overview

🧪 **Objective**  
This project explores the fascinating world of **rotating fluids**, investigating:

- The formation of **forced vortices** 🌪️  
- Effects of **Coriolis & centrifugal forces** 🌀  
- Emergence of structures like **Taylor columns** and **Ekman layers**  
- Paraboloid fluid surfaces in rotation 🥣

📚 **Why It Matters**

Rotating fluid phenomena are foundational in:

- 🌍 **Meteorology**: cyclones, anticyclones  
- 🌊 **Oceanography**: Coriolis-driven currents  
- 🚀 **Aerospace**: fuel tank dynamics  
- 🏭 **Industrial Systems**: mixers & centrifuges  

---

## 🧠 Theory Snapshot

| Concept            | Description |
|--------------------|-------------|
| **Forced Vortex**  | All particles rotate like a rigid body with constant angular velocity. |
| **v = rω**          | Tangential velocity in forced vortex motion. |
| **h(r) = (ω²r²)/g** | Shape of the rotating free surface (paraboloid). |
| **Key Forces**     | Centrifugal, Coriolis, Viscous |
| **Key Numbers**    | Rossby (Ro), Ekman (Ek) |

📊 *Pressure increases radially due to centrifugal acceleration.*  
🧩 *Vortex motion gets more complex with boundary effects and internal viscosity.*

---

## 🧰 Components Used

| Component                | Description              |
|--------------------------|--------------------------|
| Arduino UNO R3           | Microcontroller board    |
| A4988 Driver             | Stepper motor driver     |
| 17HS4410S Stepper Motor  | Motor for fluid rotation |
| Cylinder + Water + Dye   | Fluid medium             |
| Breadboard + Jumper Wires| Circuit connections      |

🔌 **Basic Circuit**  
![Circuit Diagram](https://i.imgur.com/xUbbdyu.png)  
<sub>*Custom turntable setup using A4988 & Arduino*</sub>

---

## ⚙️ Arduino Code

Saved this as `rotating_fluid.ino`:

```cpp
const int dp = 2;
const int sp = 3;

void setup() {
  pinMode(dp, OUTPUT);
  pinMode(sp, OUTPUT);
  digitalWrite(dp, HIGH);
}

void loop() {
  digitalWrite(sp, HIGH);
  delayMicroseconds(500);
  digitalWrite(sp, LOW);
  delayMicroseconds(500);
}
```
## 📂 Arduino Sketch – Stepper Motor Control

This sketch controls the stepper motor to create **uniform rotation** in the rotating fluid experiment.
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
