# Calculadora – Estructuras de control y funciones

> Laboratorio grupal guiado — Herramientas de Programación Aplicada I (UTP, 2025).

## Qué hace
Una calculadora con menú que se repite hasta que el usuario elige salir.
Cada opción (sumar, restar, dividir, multiplicar) lee dos enteros y llama
a una función propia para calcular el resultado.

## Cómo compilar
```
gcc calculadora.c -o calculadora
./calculadora
```

## Qué practiqué
- `switch` y estructura de programa basada en menú
- Funciones con valor de retorno
- Validación de entrada con `while`
- Limpiar el búfer de entrada después de `scanf` con `getchar()`

## Retos y aprendizajes
- La división entera trunca en vez de redondear: `7 / 2` con dos
  operandos `int` da `3`, no `3.5`, porque ambos son enteros.
- La validación de la división (`while (num2 <= 0)`) también rechaza
  negativos, pero el mensaje solo dice "el denominador no puede ser
  cero". No describe lo que realmente se valida; un mensaje más claro
  cubriría los dos casos.
- `scanf("%d", ...)` deja el salto de línea en el búfer. Sin
  `while(getchar() != '\n'); getchar();` justo después, el mensaje de
  "presione Enter para continuar" se salta por completo.
