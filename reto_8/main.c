#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Estas en un sueño tienes 3 opciones\n");

    printf("1). Estas en una habitacion solo, pensandola a ella y decides olvidarla de una ves por todas\n");
    printf("2). Decides esperar y ahogarte en el wiskey y morir de intoxicacion\n");
    printf("3). Decides ir a la cama y encontrar a una persona que te ayude a recuperar tu memoria\n");
    int option;
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("La olvidaste y derrepente, la recuerdas y te das cuente que es imposible olvidarla. \n");
        break;
    case 2:
        printf("Te tomaste una botela de wiskey y mueres de intoxicacion, y ella jamas se entero\n");
        break;
    case 3:
        printf("Al final perdiste todo, y tu madre esta hay para ayudarte. En fin estas muerto\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }

    return 0;
}