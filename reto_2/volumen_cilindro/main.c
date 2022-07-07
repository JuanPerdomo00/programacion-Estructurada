#include <stdio.h>
#include <stdlib.h>


/*
- copyright: jakepy 2022
- license: GPLv3
- version: 1.0.0
- author: jakepy
*/


float areaBase(int radio, float PI)
{
    float area;
    area = (PI * (radio * radio));
    return area;
}

float volumen(int radio, float PI, int altura)
{
    float volumen;
    volumen = (areaBase(radio, PI) * altura);
    return volumen;
}

int main()
{
    printf("!Calcula volumen y area de un cilindro!\n\n");
    float radio, altura, PI;
    PI = 3.1416;
    printf("Ingrese el radio de la base: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &altura);

    printf("\nEl area de la base es: %f\n", areaBase(radio, PI));
    printf("El volumen del cilindro es: %f\n", volumen(radio, PI, altura));
    return 0;
}