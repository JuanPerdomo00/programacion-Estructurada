#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de asignacion\n");

    int valor;

    valor = 11;

    printf("Valor: %i\n", valor);

    valor += 1;

    printf("Valor: %i\n", valor);

    valor -= 2;

    printf("Valor: %i\n", valor);

    valor *= 5;

    printf("Valor: %i\n", valor);

    valor /= 4;

    printf("Valor: %i\n", valor);

    valor %= 3;

    printf("Valor: %i\n", valor);
    return 0;
}
