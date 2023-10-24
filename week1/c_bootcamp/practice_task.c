#include<stdio.h>

int main () {
    // This is a comment :)
    int width;
    int length;
    int area;
    
    printf("Enter width: ");
    scanf("%d", &width);

    printf("Enter length: ");
    scanf("%d", &length);

    area = width * length; 

    printf("Area: %d\n", area);
    return 0;
}