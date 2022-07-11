#include<stdio.h>
#include<stdlib.h>


int main() {
    printf("Condicional switch\n");

    int option;

    scanf("%i", &option);

    switch (option) {
        case 1:
            printf("Opcion 1\n");
            break;
        case 2:
            printf("Opcion 2\n");
            break;
        case 3:
            printf("Opcion 3\n");
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }
    return 0;
}
