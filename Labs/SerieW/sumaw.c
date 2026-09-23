#include<stdio.h>
//Laboratorio grupal - HPA I, UTP (2025)//
float sumar(int n){
    int i, fact = 1;
    float serie = 0.0;
   for(i = 1; i <= n; i++ ){
    fact = fact * i;
    serie = serie + (float) i / fact;
    }
    return serie;
}

int main(){
    int n;
    float w;
    printf("Ingrese el valor de n:");
    scanf("%i", &n);
    while(n == 0){
        printf("Ingrese un valor diferente de cero: ");
        scanf("%i", &n);
    }
    w = sumar(n);
    printf("\nEl resultado de la serie es: %.3f", w);
}
