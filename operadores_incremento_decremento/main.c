#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Operadores de incremento y decremento\n");

    int valor, res;

    valor = 10;

    res = valor++;

    printf("Valor: %i\n", res);

    valor = 10;

    res = ++valor;

    printf("Valor: %i\n", res);

    valor = 10;

    res = valor--;

    printf("Valor: %i\n", res);

    valor = 10;

    res = --valor;

    printf("Valor: %i\n", res);

    return 0;
}