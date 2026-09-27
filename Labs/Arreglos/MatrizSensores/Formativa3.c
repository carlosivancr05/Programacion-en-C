#include <stdio.h>
#define F 5
#define C 3

//Laboratorio grupal - HPA I, UTP (2025)//

void calcularP(float temp[F][C], float promedio[C]) {
    int i, j;
    float suma;
    for (j = 0; j < C; j++) {
        suma = 0;
        for (i = 0; i < F; i++) {
            suma += temp[i][j];
        }
        promedio[j] = suma / F;
    }
}

void calcularE(float temp[F][C], float menor[C], float mayor[C]) {
    int i, j;
    for (j = 0; j < C; j++) {
        menor[j] = temp[0][j];
        mayor[j] = temp[0][j];
        for (i = 1; i < F; i++) {
            if (temp[i][j] < menor[j])
                menor[j] = temp[i][j];
            if (temp[i][j] > mayor[j])
                mayor[j] = temp[i][j];
        }
    }
}

int main() {
    float temp[F][C];
    float promedio[C];
    float menor[C], mayor[C];
    int i, j;

    for (i = 0; i < F; i++) {
        printf("Medicion %d:\n", i + 1);
        for (j = 0; j < C; j++) {
            printf("Temperatura del simulador %d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    calcularP(temp, promedio);
    calcularE(temp, menor, mayor);

    for (j = 0; j < C; j++) {
        printf("\nSimulador %d:\n", j + 1);
        printf("Promedio: %.2f\n", promedio[j]);
        printf("Temperatura mas baja: %.2f\n", menor[j]);
        printf("Temperatura mas alta: %.2f\n", mayor[j]);
    }

    return 0;
}
