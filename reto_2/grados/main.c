#include <stdio.h>
#include <stdlib.h>


/*
- copyright: jakepy 2022
- license: GPLv3
- version: 1.0.0
- author: jakepy
*/

int main()
{
    printf("\n*********************************************************\n");
    printf("*       grados Fahrenheit a grados Celsius               *\n");
    printf("\n*********************************************************\n");

    float fahrenheit, celsius;
    printf("Ingrese los grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;

    printf("\nLos grados Fahrenheit %f son %f grados Celsius\n", fahrenheit, celsius);

    return 0;
}