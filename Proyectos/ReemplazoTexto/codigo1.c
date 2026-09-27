#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include <stdlib.h>
#define P 500

//Proyecto #1 de HPAI - Grupal (UTP, 2025)//

int calcularLon(const char texto[]){
    int x = 0;
    while (texto[x] != '\0'){
        x++;
    }
    return x;
}

int reemplazar(const char remplazo[], const char buscar[], char texto[], char salida[]){
    int z = 0, k, x = 0, j = 0, cont = 0, lRemplazo, lBuscar;

    lBuscar = calcularLon(buscar);
    lRemplazo = calcularLon(remplazo);
    
        while (texto[x] != '\0'){
            z = 0;

        for (k = 0; k < lBuscar; k++){
            if (texto[x + k] == buscar[k]){
                z++;
            }
        }

        if (z == lBuscar){

            for (k = 0; k < lRemplazo; k++){
                salida[j++] = remplazo[k];
            }
            x += lBuscar;
            cont++;
        }
        else{

            salida[j++] = texto[x++];
        }
    }

    salida[j] = '\0';
    return cont;
}


void restaurar(char original[], char resultado[]){
    int x = 0;
    while (original[x] != '\0'){
        resultado[x] = original[x];
        x++;
    }
    resultado[x] = '\0';
}

int main (){
    char texto[P], buscar[P], salida[P], remplazo[P];
    int opcion, cambio;

    system("cls");
    system("color 3F");

    gotoxy(10,5); printf("Ingrese el texto: ");
    gotoxy(14,6); fgets(texto, sizeof(texto), stdin);

    gotoxy(10,8); printf("Escriba la palabra que desea remplazar: ");
    gotoxy(10,9); scanf("%s", buscar);

    gotoxy(10,11); printf("Escriba la nueva palabra: ");
    gotoxy(10,12); scanf("%s", remplazo);

    cambio = reemplazar(remplazo, buscar, texto, salida);

    gotoxy(13,14); printf("Texto modificado: %s", salida);
    gotoxy(10,15); printf("Remplazos realizados: %i", cambio);

    gotoxy(10,17); printf("Desea restaurar el texto a su forma original? (1 = si / 0 = no): ");
    gotoxy(10,18); scanf("%i", &opcion);

    if (opcion == 1){
        restaurar(texto, salida);
        gotoxy(12,20); printf("Texto restaurado:\n%s", salida);
    }

    gotoxy(0,25);
    return 0;
}
