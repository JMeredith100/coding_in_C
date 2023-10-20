#include <stdio.h>

float circleArea(float r)
{
    float area;
    area = (r * r) * 3.14;
    return area;
}

float sphereVolume(float r)
{
    float volume;
    volume = (4/3) * 3.14159 * (r * r * r);
    return volume;
}

int main ()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area is equal to %0.3f\n", circleArea(radius));
    printf("Volume is equal to %0.3f\n", sphereVolume(radius));

    return 0;
}