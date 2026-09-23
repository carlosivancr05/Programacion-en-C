# Array Normalization

> Individual lab — Applied Programming Tools I (UTP, 2025).

## What it does
Reads an array of `n` integers, finds the maximum value, and attempts
to normalize the array by dividing every element by that maximum.

## How to build
```
gcc lab10.c -o lab10
./lab10
```

## What I practiced
- Passing arrays to functions (`int tempe[]`)
- Variable-length arrays (`int tempe[n]`, sized at runtime)
- Finding a maximum with a linear scan

## Challenges and takeaways
- **The normalization doesn't actually work.** `tempe` is declared as
  `int`, so `tempe[x] = tempe[x] / may;` performs integer division.
  For example, with `may = 100`, a value of `50` becomes `50/100 = 0`
  instead of `0.5`. Every value except the maximum itself collapses
  to `0`, so almost all information is lost.
- To truly normalize into a 0.0–1.0 range, `tempe` (or at least the
  division) needs to use `float`: `(float)tempe[x] / may`.
- This is the same integer-division pitfall from earlier labs, but
  here it silently breaks the actual purpose of the function instead
  of just rounding a result — a good reminder to think about data
  types before writing an operation like normalization, which is
  common when reading raw sensor values in embedded systems.
