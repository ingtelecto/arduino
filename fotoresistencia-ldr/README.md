# ☀️ Medición de Luz con Fotoresistencia (LDR)

Esta práctica enseña cómo medir la intensidad de luz ambiente utilizando una **fotoresistencia (LDR)** conectada a una entrada analógica de Arduino mediante un divisor de tensión.

## 🧰 Materiales utilizados

- **1x** Placa Arduino (UNO, Nano o Mega)
- **1x** Fotoresistencia LDR
- **1x** Resistencia de 10kΩ
- **1x** Protoboard
- **3x** Cables Jumper (macho-macho)

## 📐 Conexiones del circuito

1. Un extremo del **LDR** a **5V**.
2. El otro extremo del **LDR** al pin analógico **A0** y a un extremo de la resistencia de **10kΩ**.
3. El extremo restante de la resistencia de **10kΩ** a **GND** (Divisor de voltaje).

## 💻 Código

El código listo para cargar se encuentra en [`fotoresistencia-ldr.ino`](fotoresistencia-ldr.ino).
Abre el Monitor Serie a **9600 baudios** para observar las variaciones de intensidad de luz según la iluminación sobre el LDR.
