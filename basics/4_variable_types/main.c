/*
Objectives:
+ Declare a variable for each: int, long, short, float, double & char
+ Display a list of primitive types variables w/ value and memory size

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=-52;
    long l=27000;
    short s=10;
    float f=2.7;
    double d=30000.584;
    char c='a';

    printf("My int = %d and is %d bytes!\n", i, sizeof(i));
    printf("My long = %ld and is %d bytes!\n", l, sizeof(l));
    printf("My short = %d and is %d bytes!\n", s, sizeof(s));
    printf("My float = %.1f and is %d bytes!\n", f, sizeof(f));
    printf("My double = %.3f and is %d bytes!\n", d, sizeof(d));
    printf("My char = '%c' and is %d bytes!\n", c, sizeof(c));

    return 0;
}
