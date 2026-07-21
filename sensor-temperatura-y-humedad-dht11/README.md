# 🌡️ Sensor de Temperatura y Humedad DHT11

Esta práctica muestra cómo medir la temperatura ambiente y la humedad relativa utilizando un módulo o sensor **DHT11** conectado a un Arduino sin requerir librerías externas adicionales.

## 🧰 Materiales utilizados

- **1x** Placa Arduino (UNO, Nano o Mega)
- **1x** Sensor o Módulo DHT11
- **1x** Resistencia de 10kΩ (pull-up entre VCC y Data, si no se usa módulo con resistencia integrada)
- **1x** Protoboard
- **3x** Cables Jumper (macho-macho)

## 📐 Conexiones del circuito

| Sensor DHT11 | Arduino UNO |
|--------------|-------------|
| VCC          | 5V          |
| DATA         | Pin A0      |
| GND          | GND         |

## 💻 Código

El código listo para cargar en Arduino IDE se encuentra en [`sensor-temperatura-y-humedad-dht11.ino`](sensor-temperatura-y-humedad-dht11.ino).
Abre el Monitor Serie a **9600 baudios** para visualizar las lecturas de humedad y temperatura en tiempo real.
