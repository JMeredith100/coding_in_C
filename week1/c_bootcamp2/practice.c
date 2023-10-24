#include<stdio.h>

int main () {
    int num = 20;
    int i;
    for (i = 1; i <= 10; i++) {
        num = i * i;
        printf("%d\n", num);
    }
}