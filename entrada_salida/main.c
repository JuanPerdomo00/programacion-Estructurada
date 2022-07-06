#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float PI;
    char letra;

    printf("Ingresa el valor de un numero entero: ");
    // & is in pounter
    scanf("%i", &entero);

    printf("Ingresa el numero PI: ");
    scanf("%f", &PI);

    printf("Ingresa una letra: ");
    scanf(" %c", &letra);


    printf("Tu numero entero es: %i, \n El numero PI es: %f \n, La letra es: %c", entero, PI, letra);

    return 0;
}
