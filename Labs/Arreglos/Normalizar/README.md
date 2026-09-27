# Normalización de un arreglo

> Laboratorio individual — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee un arreglo de `n` enteros, encuentra el valor máximo e intenta
normalizar el arreglo dividiendo cada elemento entre ese máximo.

## Cómo compilar
```
gcc lab10.c -o lab10
./lab10
```

## Qué practiqué
- Pasar arreglos a funciones (`int tempe[]`)
- Arreglos de tamaño variable (`int tempe[n]`, definido en ejecución)
- Encontrar el máximo con un recorrido lineal

## Retos y aprendizajes
- **La normalización no funciona realmente.** `tempe` es `int`, así que
  `tempe[x] = tempe[x] / may;` hace división entera. Por ejemplo, con
  `may = 100`, un valor de `50` queda en `50/100 = 0` en vez de `0.5`.
  Todos los valores menos el máximo terminan en `0`, y se pierde casi
  toda la información.
- Para normalizar de verdad en el rango 0.0–1.0, `tempe` (o al menos la
  división) debe usar `float`: `(float)tempe[x] / may`.
- Es el mismo error de división entera de otros labs, pero aquí rompe
  en silencio el propósito de la función en vez de solo redondear un
  resultado. Buen recordatorio de pensar en los tipos de datos antes de
  una operación como la normalización, que es común al leer valores
  crudos de sensores en sistemas embebidos.
