#include<stdio.h>

int main () 
{
    int pass = 50;
    int distinction = 70;
    int mark;

    int temp;

    printf("Enter Mark: ");
    scanf("%d", &mark);

    if (mark >= 70) 
    {
        printf("Distinction Achieved.\n");
    }
    else if (mark >= 50) 
    {
        printf("Passed.\n");
    }
    else 
    {
        printf("Failed.\n");
    }

    printf("Enter Temperature: ");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40)
    {
        printf("Temperature is valid\n");
    }
    else
    {
        printf("Temperature is invalid\n");
    }
}