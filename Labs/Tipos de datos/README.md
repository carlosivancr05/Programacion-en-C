# Lab 2 – Tipos de datos y expresiones aritméticas

> Laboratorio grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee cuatro enteros (a, b, x, y) y evalúa tres expresiones que mezclan
`int`, `float` y `double`, mostrando cómo el tipo de los operandos
afecta el resultado.

## Cómo compilar
```
gcc lab2.c -o lab2 -lm
./lab2
```
(`-lm` enlaza la biblioteca matemática, necesaria para `pow()` en Linux.)

## Qué practiqué
- Tipos básicos: `int`, `float`, `double`
- División entera vs. división real
- Conversión implícita de tipos y `pow()` de `<math.h>`

## Retos y aprendizajes
- El tipo de la variable donde se guarda el resultado no cambia cómo se
  evalúa la expresión: `float m = 3/2;` guarda `1.0`, no `1.5`. Lo que
  importa es el tipo de los operandos (por ejemplo, escribir `4.00`).
- Un cast solo funciona si se aplica antes de la operación:
  `(float)a / b` da `2.5`, pero `(float)(a / b)` da `2.0`.
