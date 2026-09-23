# Series W – Functions and Accumulators

> Guided group lab — Applied Programming Tools I (UTP, 2025).

## What it does
Computes the sum of the series `1/1! + 2/2! + 3/3! + ... + n/n!` for a
user-given `n`, using a function that accumulates both the running
factorial and the running sum in the same loop.

## How to build
```
gcc sumaw.c -o sumaw
./sumaw
```

## What I practiced
- Functions that return a value (`float sumar(int n)`)
- Accumulator pattern: updating a running total (and a running
  factorial) inside the same loop
- Implicit and explicit type conversion between `int` and `float`

## Challenges and takeaways
- **Input validation only checks for zero.** `while(n == 0)` lets a
  negative `n` through. Since the `for` loop condition is `i <= n`,
  a negative `n` means the loop body never runs even once, so the
  function silently returns `0.000` instead of flagging an invalid
  input.
- **Integer overflow in the factorial.** `fact` is declared as `int`,
  independently of `serie` being `float`. For `n` around 13–15,
  `n!` exceeds what a 32-bit `int` can hold, and `fact` silently
  wraps around to a wrong (sometimes negative) value with no error
  or warning — the program keeps running as if nothing happened.
  A `long long` (or `double`) for `fact` would hold much larger
  values before overflowing.
