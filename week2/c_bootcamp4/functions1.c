#include <stdio.h>

float sum (int a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %0.1f is %0.1f\n", y, z);

    return 0;
}