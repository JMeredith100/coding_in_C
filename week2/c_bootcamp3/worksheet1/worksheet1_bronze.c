#include<stdio.h>

int main () 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("The number %d is zero.\n", num);
    }
    else if (num > 0) 
    {
        printf("The number %d is positive.\n", num);
    }
    else 
    {
        printf("The number %d is negative.\n", num);
    }

    if (num % 4 == 0 && num % 5 == 0) 
    {
        printf("The number %d is divisible by 4 and 5.\n", num);
    }

}