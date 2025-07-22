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

| Concept        | Description |
|----------------|-------------|
| **Forced Vortex** | All particles rotate like a rigid body with constant angular velocity. |
| **v = rω**      | Tangential velocity in forced vortex motion. |
| **h(r) = (ω²r²)/g** | Shape of the rotating free surface (paraboloid) |
| **Key Forces** | Centrifugal, Coriolis, Viscous |
| **Key Numbers** | Rossby (Ro), Ekman (Ek) |

📊 *Pressure increases radially due to centrifugal acceleration.*  
🧩 *Vortex motion gets more complex with boundary effects and internal viscosity.*

---

## 🧰 Components Used

| Component       | Description |
|-----------------|-------------|
| Arduino UNO R3 | Microcontroller |
| A4988 Driver   | Stepper motor driver |
| 17HS4410S Stepper | Motor for rotation |
| Cylinder + Water + Dye | Fluid medium |
| Jumper Wires + Breadboard | Connections & layout |

🔌 **Basic Circuit**  
![Circuit Diagram](https://i.imgur.com/xUbbdyu.png)  
<sub>*Custom turntable setup using A4988 & Arduino*</sub>

---

## ⚙️ Code Snippet

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
