#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Do while \n");

    char answer = 'q';
    char value;

    do
    {
        printf("Enter una letra: ");
        scanf("%c", &value);
        printf("You entered: %c\n", value);
    } while (answer == 'y');

    return 0;
}