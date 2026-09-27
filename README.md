# Programación en C

Laboratorios y proyectos del curso **Herramientas de Programación Aplicada I** (UTP, 2025),
de la Licenciatura en Ingeniería de Sistemas y Computación.

Cada carpeta tiene su propio README con qué hace el programa, cómo compilarlo,
qué practiqué y los errores o limitaciones que encontré al revisarlo.

## Contenido

### Labs/
| Carpeta | Tema | Tipo |
|---|---|---|
| `Tipos de datos` | Tipos `int`, `float`, `double` y división entera vs. real | Grupal guiado |
| `SerieW` | Funciones y acumuladores (serie `n/n!`) | Grupal guiado |
| `Calculadora` | Menú con `switch`, funciones y validación de entrada | Grupal guiado |
| `Arreglos/Normalizar` | Arreglos, búsqueda del máximo, normalización | Individual |
| `Arreglos/FiltrarPromediar` | Filtrado de arreglos y promedio condicional | Individual |
| `Arreglos/MatrizSensores` | Arreglos 2D: promedio, mínimo y máximo por sensor | Grupal guiado |

### Proyectos/
| Carpeta | Tema | Tipo |
|---|---|---|
| `ReemplazoTexto` | Manejo de cadenas sin `<string.h>`: buscar y reemplazar palabras | Proyecto grupal guiado |

## Cómo compilar
Todos se compilan con `gcc`. Las instrucciones exactas están en cada carpeta.
`ReemplazoTexto` usa `windows.h`, así que solo compila en Windows (MinGW).

## Nota
Los laboratorios marcados como *guiados* se hicieron siguiendo pasos dados en clase.
En cada README documento lo que entendí del proceso y los errores que detecté después,
como la división entera, el desbordamiento de enteros o de búfer.
