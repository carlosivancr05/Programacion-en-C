# Serie W – Funciones y acumuladores

> Laboratorio grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Calcula la suma de la serie `1/1! + 2/2! + 3/3! + ... + n/n!` para un `n`
dado por el usuario, con una función que acumula el factorial y la suma
en el mismo ciclo.

## Cómo compilar
```
gcc sumaw.c -o sumaw
./sumaw
```

## Qué practiqué
- Funciones que retornan un valor (`float sumar(int n)`)
- Patrón acumulador: actualizar un total (y un factorial) dentro del mismo ciclo
- Conversión implícita y explícita entre `int` y `float`

## Retos y aprendizajes
- **La validación solo revisa el cero.** `while(n == 0)` deja pasar un `n`
  negativo. Como la condición del `for` es `i <= n`, con un `n` negativo
  el ciclo nunca se ejecuta y la función retorna `0.000` sin avisar que
  la entrada no era válida.
- **Desbordamiento del factorial.** `fact` es `int`, aunque `serie` sea
  `float`. Para `n` entre 13 y 15, `n!` supera lo que cabe en un `int`
  de 32 bits, y `fact` da la vuelta a un valor incorrecto (a veces
  negativo) sin error ni advertencia. Con `long long` (o `double`) para
  `fact` se aguantarían valores mucho más grandes antes de desbordar.
