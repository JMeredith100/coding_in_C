#include<stdio.h>

int main () {
    int i;
    char mystring = "Hello";
    
    for (i = 0; i < 6; i++) {
        printf("%c\n", mystring[i])
    }

    return 0;
}