#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicionales if lese, else if \n");

    float a, b, c;
    a = 50;
    b = 100;
    c = 150;

    printf("Condicion \n");

    if (a == b)
    {
        printf("a es igual a b \n");
    }
    else if (b == c)
    {
        printf("b es igual a c \n");
    }
    else
    {
        printf("Ninguna condicion se cumplio \n");
    }

    return 0;
}