#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Operadores relacionales \n");

    float a, b;
    a = 5;
    b = 10;

    if (a > b || a >= b) {
        printf("a es mayor o igual que b \n");
    } else if (a < b || a <= b) {
        printf("a es menor o igual que b \n");
    } else if (a == b) {
        printf("a es igual que b \n");
    } else if (a != b) {
        printf("a es diferente que b \n");
    }
    



    return 0;
}