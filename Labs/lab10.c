#include <stdio.h>

int calcularM(int tempe[], int n){
    int x, may = tempe[0];

   
    for (x = 1; x < n; x++){
        if (tempe[x] > may)
            may = tempe[x];
    }
    return may;
}

void normalizar(int tempe[], int may, int n){
    int x;
    for (x = 0; x < n; x++){
        tempe[x] = tempe[x] / may;   
    }
}

int main(){
    int n, i, may;

    printf("Cuántos elementos tiene el arreglo: ");
    scanf("%i", &n);

    while (n <= 0){
        printf("No es un tamaño valido. ");
        scanf("%i", &n);
    }

    int tempe[n];

    for (i = 0; i < n; i++){
        printf("Ingrese un entero: ");
        scanf("%i", &tempe[i]);
    }

   
    may = calcularM(tempe, n);

    
    normalizar(tempe, may, n);

    
    printf("\nArreglo normalizado:\n");
    for (i = 0; i < n; i++)
        printf("%i ", tempe[i]);

    return 0;
}
