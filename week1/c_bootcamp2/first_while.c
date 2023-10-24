#include<stdio.h>

int main () {

    int a;

    while (a <= 10) {
        printf("a = %d\n", a);
        a += 2;
    }

    printf("After loop: a = %d\n", a);

    return 0;
}