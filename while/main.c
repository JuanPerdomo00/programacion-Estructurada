#include<stdio.h>
#include<stdlib.h>

int main() {

    printf("Bucle while\n");

    int lim;
    printf("Introduce un numero: ");
    scanf("%i", &lim);

    int i = 1;

    while (i <= lim) {
        printf("numero: %i\n", i);
        i++;
    }

    return 0;
}
