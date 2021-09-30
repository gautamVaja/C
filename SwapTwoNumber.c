#include <stdio.h>

int main()
{
    int a, b, t;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("swaped no. are  %d %d", a, b);
    return 0;
}