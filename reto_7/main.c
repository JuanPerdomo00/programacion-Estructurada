#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Verifica que pasaste el año\n");

    int nota;
    printf("Ingrese la nota: ");
    scanf("%i", &nota);

    if (nota < 60)
    {
        printf("No pasaste el año");
    }
    else if (nota >= 90)
    {
        printf("Pasaste el año, super limpio :)");
    }
    else if (nota >= 60)
    {
        printf("Pasaste el año");
    }
    else
    {
        printf("Ingresa la nota");
    }
    return 0;
}