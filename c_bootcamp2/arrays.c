#include<stdio.h>

int main () {
    int N = 10;
    int array[N];
    int i;

    for (i = 0; i < N; i++) {
        array[i] = i * 10;
    }

    for (i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}