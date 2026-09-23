# Lab 2 – Data Types and Arithmetic Expressions

> Guided group lab — Applied Programming Tools I (UTP, 2025).

## What it does
Reads four integers (a, b, x, y) and evaluates three expressions that
mix `int`, `float`, and `double`, showing how operand types affect
the result.

## How to build
```
gcc lab2.c -o lab2 -lm
./lab2
```
(`-lm` links the math library, required for `pow()` on Linux.)

## What I practiced
- Basic types: `int`, `float`, `double`
- Integer division vs. real division
- Implicit type conversion and `pow()` from `<math.h>`

## Challenges and takeaways
- The type of the variable storing the result doesn't change how the
  expression itself is evaluated: `float m = 3/2;` stores `1.0`, not
  `1.5`. What matters is the type of the operands (e.g. writing `4.00`).
- A cast only works if applied before the operation: `(float)a / b`
  gives `2.5`, but `(float)(a / b)` gives `2.0`.
