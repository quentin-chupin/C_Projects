#include <stdio.h>
#include <stdlib.h>

int main(){
    char entry;
    printf("Enter a letter: ");
    scanf("%c", &entry);

    printf("You have typed character %c, its value is:\n", entry);
    printf("\t- %d in decimal\n\t- %x in hexadecimal", (int)entry, (int)entry);

    return 0;
}
