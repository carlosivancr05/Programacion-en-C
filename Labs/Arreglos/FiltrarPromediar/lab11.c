#include <stdio.h>

/*Elabore un programa en C que dado 50 números los almacene en un arreglo
llamado numero. Desarrolle:
1. Sumatoria de todos los números pares.
2. Promedio de números mayores a 90.
*/

int calcularS(int numero[]){
    int i, suma = 0;
    for (i = 0; i < 50; i++){
        if (numero[i] % 2 == 0)
            suma += numero[i];
    }
    return suma;
}

int promediarN(int numero[]){
    int i, sumaT = 0, cont = 0, promedio = 0;

    for (i = 0; i < 50; i++){
        if (numero[i] > 90){
            sumaT += numero[i];
            cont++;
        }
    }

    if (cont > 0)
        promedio = sumaT / cont;

    return promedio;
}

int main(){
    int i, numero[50], num;

    for (i = 0; i < 50; i++){
        printf("Lea un entero: ");
        scanf("%i", &num);
        numero[i] = num;
    }

    printf("\nPromedio de numeros > 90: %i\n", promediarN(numero));
    printf("Total de pares: %i\n", calcularS(numero));

    return 0;
}
