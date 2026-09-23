#include<stdio.h>
#include<math.h>
//Perteneciente a Andres Flores, Carlos Caballero , Oscar Aviles, Carlos Dominguez, Kevin EsquivelFecha: 31/8/2025
int main(){
    int a, b, x, y;
    double z;
    float m;
    printf("Ingrese el valor de a: ");
    scanf("%i", &a);
    printf("Ingrese el valor de b: ");
    scanf("%i", &b);
    printf("Ingrese el valor de x: ");
    scanf("%i", &x);
    printf("Ingrese el valor de y: ");
    scanf("%i", &y);
    z = a + b * pow(x,y); 
    a = a + (b-x)/y; 
    m = a + (4.00-x)/y;
    printf("z = %lf", z);
    printf("\na = %i", a);
    printf("\nm = %f", m);
return 0;
}
