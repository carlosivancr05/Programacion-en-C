# Filtering and Averaging an Array

> Individual lab — Applied Programming Tools I (UTP, 2025).

## What it does
Reads 50 integers into an array and computes two things from them:
the sum of all even numbers, and the average of the numbers greater
than 90.

## How to build
```
gcc lab11.c -o lab11
./lab11
```

## What I practiced
- Passing arrays to functions and iterating with a fixed bound
- Filtering elements with a condition inside a loop
- Guarding a division against a zero denominator (`if (cont > 0)`)

## Challenges and takeaways
- `promedio` is declared as `int`, so the average is truncated:
  three values `95, 96, 92` give `283/3 = 94.33`, but the program
  prints `94`. Same integer-division behavior as in other labs, just
  applied to an average this time.
- Unlike the array-normalization lab, this one properly checks
  `cont > 0` before dividing, so it never divides by zero even if no
  number is greater than 90 — it just returns `0`.
- The parity check (`numero[i] % 2 == 0`) works correctly with
  negative numbers in C: `-4 % 2` evaluates to `0`, so `-4` is
  correctly counted (and summed) as even.
