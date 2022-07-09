#include<stdio.h>
#include<stdlib.h>


int main() {

    int x;
    printf("Ingresa Un Numero Entero: ");
    scanf("%i", &x);

    x %= 5;

    x++;

    printf("El Numero:  %i", x);
    return 0;
}