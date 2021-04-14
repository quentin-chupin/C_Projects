/*
Objectives:
+ Ask user his age and height
+ Ask 2 characters for his initials
+ Display information in terminal

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age;
    float height;
    char first_name, surname;

    printf("Please enter your age and height, separated with a space: ");
    scanf("%d %f", &age, &height);

    fflush(stdin);

    printf("Please enter your initials: ");
    scanf("%c%c", &first_name, &surname);

    printf("\nYou are %d y.o. and %.2f m tall.\n", age, height);
    printf("Your initials are %c%c.\n", first_name, surname);

    return 0;
}
