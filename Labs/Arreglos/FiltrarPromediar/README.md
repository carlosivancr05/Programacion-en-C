# Filtrar y promediar un arreglo

> Laboratorio individual — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee 50 enteros en un arreglo y calcula dos cosas: la suma de todos los
números pares y el promedio de los números mayores que 90.

## Cómo compilar
```
gcc lab11.c -o lab11
./lab11
```

## Qué practiqué
- Pasar arreglos a funciones y recorrerlos con un límite fijo
- Filtrar elementos con una condición dentro de un ciclo
- Proteger una división contra un denominador cero (`if (cont > 0)`)

## Retos y aprendizajes
- `promedio` está declarado como `int`, así que el promedio se trunca:
  con `95, 96, 92` da `283/3 = 94.33`, pero el programa imprime `94`.
  Es el mismo comportamiento de división entera de otros labs, esta vez
  aplicado a un promedio.
- A diferencia del lab de normalización, este sí revisa `cont > 0` antes
  de dividir, así que nunca divide entre cero aunque ningún número sea
  mayor que 90: simplemente retorna `0`.
- La revisión de paridad (`numero[i] % 2 == 0`) funciona bien con
  negativos en C: `-4 % 2` da `0`, así que `-4` se cuenta (y se suma)
  correctamente como par.
