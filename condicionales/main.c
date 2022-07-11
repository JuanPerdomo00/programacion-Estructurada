#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Condicionales \n");

    float a, b, c;

    a = b = 100;

    printf("Condicion \n");

    if (a == b)
    {
        printf("a es igual a b \n");
    }
    printf("segunda condicion \n");
    if (a == b)
    {
        printf("a es igual a b \n");
        c = a + b;
        printf("La suma de a y b es: %f \n", c);
    }

    return 0;
}