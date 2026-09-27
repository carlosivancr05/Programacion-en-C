# Herramienta de reemplazo de texto

> Proyecto grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Lee una línea de texto y una palabra a buscar, reemplaza cada aparición
de esa palabra por una nueva e informa cuántos reemplazos se hicieron.
Opcionalmente, restaura el texto a su forma original.

## Cómo compilar
Usa `windows.h` (a través de `gotoxy.h`, para posicionar el cursor en
pantalla), así que solo compila en Windows con MinGW:
```
gcc codigo1.c -o codigo1
./codigo1
```

## Qué practiqué
- Manejo de cadenas con arreglos `char` simples (sin funciones de `<string.h>`)
- Escribir una función propia para medir la longitud de una cadena (`calcularLon`)
- Buscar un patrón dentro de una cadena, carácter por carácter
- Usar parámetros `const char[]` para indicar que una función no modifica su entrada

## Retos y aprendizajes
- **`scanf("%s", buscar)` no tiene límite de ancho.** `buscar` es un
  arreglo fijo `char[500]`, pero `scanf("%s", ...)` no lo sabe. Si el
  usuario escribe más de 500 caracteres, `scanf` sigue escribiendo más
  allá del final del arreglo, en memoria que no le corresponde: un
  desbordamiento de búfer clásico en C. El comportamiento es indefinido:
  puede cerrar el programa, corromper otra variable sin avisar o, en
  programas más sensibles, ser aprovechado para ejecutar código ajeno.
  La versión segura indica el ancho, por ejemplo `scanf("%499s", buscar)`.
- **`restaurar` en realidad no restaura nada.** `reemplazar` nunca
  modifica el arreglo original `texto`; solo escribe en otro arreglo,
  `salida`. Así que `texto` siempre queda intacto y `restaurar` solo
  vuelve a copiar datos que nunca se perdieron.
- El salto de línea que `fgets` deja al final de `texto` se trata como
  un carácter más en la búsqueda. No rompe la lógica de coincidencia;
  solo aparece en la salida impresa.
