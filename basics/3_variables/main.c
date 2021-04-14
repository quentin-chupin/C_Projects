/*
Objectives
+ Create integer age variable
+ Create floating size
+ Mark as a letter
+ Initialise variable coherently
+ Conform printing of values

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 23;
    float size = 1.72;
    char mark = 'A';

    printf("The user is %d and is %.2f m tall.\nHe has a mark of %c.\n", age, size, mark);

    return 0;
}
