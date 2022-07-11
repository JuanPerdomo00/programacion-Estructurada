#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adivina el numero \n");

    int numero_computadora = 5;

    int numero_usuario;
    printf("Ingresa un numero entre 1 y 10: ");
    scanf("%i", &numero_usuario);

    if (numero_usuario >= 10)
    {
        printf("El numero ingresado exedio el rango de 1 a 10");
    }
    else if (numero_usuario == numero_computadora)
    {
        printf("Felicidades, adivinaste el numero \n");
    }
    else
    {
        printf("Lo siento, el numero: %i no es. Era:  %i \n", numero_usuario, numero_computadora);
    }
}
