# Matriz de sensores – Promedios, mínimo y máximo

> Laboratorio grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee 5 mediciones de 3 sensores simulados en un arreglo 2D (`temp[5][3]`)
y, para cada sensor (columna), calcula el promedio, la lectura más baja
y la más alta.

## Cómo compilar
```
gcc Formativa3.c -o formativa3
./formativa3
```

## Qué practiqué
- Arreglos 2D (`float temp[F][C]`) y cómo pasarlos a funciones
- Recorrer filas vs. columnas correctamente para no mezclar datos de
  distintos sensores
- Encontrar mínimo y máximo inicializando ambos con el primer elemento
  antes de comparar el resto

## Retos y aprendizajes
- El orden de los ciclos anidados importa: el ciclo interno tiene que
  recorrer *las lecturas de un sensor* (filas, `i`) antes de pasar al
  *siguiente sensor* (columnas, `j`); si no, el promedio mezclaría
  valores de sensores distintos.
- `menor` y `mayor` empiezan copiando la primera lectura (`i = 0`), y el
  ciclo de comparación empieza en `i = 1`: comparar el primer valor
  consigo mismo sería redundante.
- A diferencia del lab de normalización, aquí todo (el arreglo, el
  acumulador, los promedios) es `float` desde el inicio, así que no hay
  truncamiento por división entera en ningún punto.
