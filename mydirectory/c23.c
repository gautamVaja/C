#include <stdio.h>
#include <math.h>
#define pi 3.14

float edist(float x1, float y1, float x2, float y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

float area(float x1, float y1, float x2, float y2, float (*ptr)(float x1, float y1, float x2, float y2))
{
    float area, radius;
    radius = ptr(x1, x2, y1, y2);
    area = pi * radius;

    return area;
}
int main()
{
    float x1, x2, y1, y2, a;

    printf("Enter value of  x1\n");
    scanf("%f", &x1);
    printf("Enter value of  y1\n");
    scanf("%f", &y1);
    printf("Enter value of  x2\n");
    scanf("%f", &x2);
    printf("Enter value of  y2\n");
    scanf("%f", &y2);

    float (*p)(float x1, float y1, float x2, float y2);
    // p = edist;
    p = &edist;

    a = area(x1, x2, y1, y2, p);

    printf("The area is %f", a);

    return 0;
}