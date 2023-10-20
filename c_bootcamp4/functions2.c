#include <stdio.h>

float sum (int a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 8.5;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);
}