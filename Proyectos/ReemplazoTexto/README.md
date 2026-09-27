# Text Replacement Tool

> Guided group project — Applied Programming Tools I (UTP, 2025).

## What it does
Reads a line of text and a word to search for, replaces every
occurrence of that word with a new one, and reports how many
replacements were made. Optionally restores the text to its
original form.

## How to build
Uses `windows.h` (via `gotoxy.h`, for cursor positioning on screen),
so it only compiles on Windows with MinGW:
```
gcc codigo1.c -o codigo1
./codigo1
```

## What I practiced
- String handling with plain `char` arrays (no `<string.h>` helpers)
- Writing a custom string-length function (`calcularLon`)
- Pattern matching inside a string, character by character
- Passing `const char[]` parameters to signal a function won't
  modify its input

## Challenges and takeaways
- **`scanf("%s", buscar)` has no width limit.** `buscar` is a fixed
  `char[500]` array, but `scanf("%s", ...)` doesn't know that. If the
  user types more than 500 characters, `scanf` keeps writing past the
  end of the array into unrelated memory — a classic C buffer
  overflow. The behavior is undefined: it can crash, silently corrupt
  another variable, or (in more sensitive programs) be exploited to
  run arbitrary code. Safer versions specify a width, e.g.
  `scanf("%499s", buscar)`.
- **`restaurar` doesn't actually restore anything meaningful.**
  `reemplazar` never modifies the original `texto` array — it only
  writes to a separate `salida` array — so `texto` is always intact.
  `restaurar` just re-copies data that was never lost.
- The trailing newline that `fgets` leaves in `texto` is just treated
  as a regular character by the search loop; it doesn't break the
  matching logic, it only shows up in the printed output.
