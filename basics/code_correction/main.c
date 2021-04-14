/*
Objectives :
+ Indenting code
+ Correct compiling errors
+ Comment code
+ Display text on 2 lines
+ Add tabulation on "hello world" line

#include <stdio.h>include <stdlib.h> ==> Lack a "#" + include are on same line
int main(){printf("Exercice, "Programme de base" Hello World!")return 0;} ==> Too many ' " ' in printf() + Lack ";" after printf
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Exercice, \"Programme de base\"\n\tHello World!\n");
    return 0;
}

