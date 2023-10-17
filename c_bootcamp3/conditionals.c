#include<stdio.h>

int main () {

    int mark = 40;
    printf("Enter mark achieved: ");
    scanf("%d", &mark);

    if (mark >= 40 && mark <= 100)
    { 
        printf ("The mark of %d is a pass\n", mark);
    }
    else if (mark >= 0 && mark < 40)
    { 
        printf ("The mark of %d is a fail\n", mark);
    }
    else 
    {
        printf("The mark %d is not valid\n", mark);
    }

    return 0;

}