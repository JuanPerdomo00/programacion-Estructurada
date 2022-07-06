#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\nCambio de valores \n\n");

    int x, y, newx,newy;

    printf("Ingresa el valor de x: ");
    scanf("%i", &x);

    printf("Ingresa el valor de y: ");
    scanf("%i", &y);

    newx = y;
    newy = x;

    printf("\nEl valor intercanviado de x es: %i \n\n", newx);
    printf("El valor intercanviado de y es: %i \n\n", newy);

    return 0;
}
