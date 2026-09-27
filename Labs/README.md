# Sensor Matrix – Averages, Min and Max

> Guided group lab — Applied Programming Tools I (UTP, 2025).

## What it does
Reads 5 measurements from 3 simulated sensors into a 2D array
(`temp[5][3]`) and, for each sensor (column), computes the average,
the lowest reading, and the highest reading.

## How to build
```
gcc Formativa3.c -o formativa3
./formativa3
```

## What I practiced
- 2D arrays (`float temp[F][C]`) and passing them to functions
- Iterating rows vs. columns correctly to avoid mixing data from
  different sensors
- Finding min/max by initializing both to the first element before
  comparing the rest

## Challenges and takeaways
- The nested loop order matters: the inner loop has to move across
  *readings for one sensor* (rows, `i`) before moving to the *next
  sensor* (columns, `j`) — otherwise the average would mix values
  from different sensors together.
- `menor`/`mayor` (min/max) start by copying the very first reading
  (`i = 0`), then the comparison loop starts at `i = 1` — comparing
  the first value against itself would be redundant.
- Unlike the array-normalization lab, everything here — the array,
  the accumulator, the averages — is declared `float` from the start,
  so there's no integer-division truncation anywhere in the chain.
