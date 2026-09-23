#include <stdio.h>
#include <stdlib.h>
//Laboratorio grupal - HPA I, UTP (2025)//
int sumar (int a, int b){
    int suma=0;
    suma = a + b;
    return suma;
}

int restar ( int d, int c){
    int resta=0;
    resta= d-c;
    return resta;
}

int dividir ( int f, int e){
    int divide=0;
    divide= f/e;
    return divide;
}

int multiplicar (int g, int j){ 
    return g * j;
}

int main(){
    int opc=0, num1=0, num2=0;

    do {
        system("cls");
        printf("Menu de opciones\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Dividir\n");
        printf("4. Multiplicar\n");
        printf("5. Salir\n");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                system("cls");
                printf("Primer numero: ");
                scanf("%d", &num1);
                printf("\nSegundo numero: ");
                scanf("%d", &num2);
                printf("\nResultado = %d\n", sumar(num1,num2));
                break;
            case 2:
                system("cls");
                printf("Primer numero: ");
                scanf("%d", &num1);
                printf("\nSegundo numero: ");
                scanf("%d", &num2);
                printf("\nResultado = %d\n", restar(num1,num2));
                break;
            case 3:
                system("cls");
                printf("Primer numero: ");
                scanf("%d", &num1);
                printf("\nSegundo numero: ");
                scanf("%d", &num2);
                while(num2 <= 0){
                    printf("\nEl denominador no puede ser cero.");
                    printf("\nIngrese otro numero: ");
                    scanf("%d", &num2);
                }
                printf("\nResultado = %d\n", dividir(num1,num2));
                break;

            
            case 4: system("cls");
             printf("Primer numero: ");
                scanf("%d", &num1);
                printf("\nSegundo numero: ");
                scanf("%d", &num2);
                 printf("\nResultado = %d\n", multiplicar(num1,num2));
                break;
            case 5:
                printf("\nSaliendo.\n");
                break;
            default:
                printf("\nOpcion invalida\n");
                break;
        }
        if(opc != 5){
            printf("\nPresione Enter para continuar.\n");
            while(getchar()!='\n');
            getchar();
        }

    } while(opc != 5);

    return 0;
}
