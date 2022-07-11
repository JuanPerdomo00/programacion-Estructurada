#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ciclo for \n");

    int upper_limit, lower_limit;

    printf("Imprimir en orden dedcendiente\n");
    printf("Ingrese el limite superior: ");
    scanf("%i", &upper_limit);

    printf("Ingrese el limite inferior: ");
    scanf("%i", &lower_limit);

    for (int i = upper_limit; i >= lower_limit; i--)
    {
        printf("numero: %i\n", i);
    }
    return 0;
}