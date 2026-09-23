# Calculator – Control Statements and Functions

> Guided group lab — Applied Programming Tools I (UTP, 2025).

## What it does
A menu-driven calculator that loops until the user chooses to exit.
Each option (add, subtract, divide, multiply) reads two integers and
calls a dedicated function to compute the result.

## How to build
```
gcc calculadora.c -o calculadora
./calculadora
```

## What I practiced
- `switch` statements and menu-driven program structure
- Functions with return values
- Input validation with `while`
- Clearing the input buffer after `scanf` with `getchar()`

## Challenges and takeaways
- Integer division truncates instead of rounding: `7 / 2` with two
  `int` operands returns `3`, not `3.5`, because both operands are
  integers.
- The division check (`while (num2 <= 0)`) also rejects negative
  numbers, but the error message only says "the denominator can't be
  zero" — it doesn't describe what's actually being validated. A
  clearer message would cover both cases.
- `scanf("%d", ...)` leaves the newline character in the input
  buffer. Without `while(getchar() != '\n'); getchar();` right after,
  the "press Enter to continue" prompt gets skipped entirely.
