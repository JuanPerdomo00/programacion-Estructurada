#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero, segundoNumero;
    printf("Ingrese el primer numero: ");
    scanf("%i", &primerNumero);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &segundoNumero);

    if (primerNumero < segundoNumero)
    {
        printf("El numero primero: %i", primerNumero);
    }
    else
    {
        printf("El numero segundo: %i", segundoNumero);
    }
    return 0;
}