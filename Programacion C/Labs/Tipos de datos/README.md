# Lab 2 – Tipos de datos y expresiones aritméticas

> Laboratorio grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee cuatro enteros (a, b, x, y) y evalúa tres expresiones que mezclan
`int`, `float` y `double`, mostrando cómo el tipo de los operandos
cambia el resultado.

## Cómo se compila
```
gcc lab2.c -o lab2 -lm
./lab2
```
(`-lm` enlaza la librería matemática por el uso de `pow()`; en Linux es obligatorio.)

## Qué practiqué
- Tipos básicos: `int`, `float`, `double`
- División entera vs. división real
- Conversión implícita de tipos y `pow()` de `<math.h>`

## Dificultades y lo que aprendí
- El tipo de la variable donde guardo el resultado no cambia cómo se
  calcula la expresión: `float m = 3/2;` guarda 1.0, no 1.5. Lo que
  importa es el tipo de los operandos (por ejemplo, escribir `4.00`).
- Un cast solo sirve si se aplica antes de la operación:
  `(float)a / b` da 2.5, pero `(float)(a / b)` da 2.0.
