#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter three numbers");
    scanf("%d %d %d", &a, &b, &c);

    if (c > b)
    {
        if (c > a)
        {
            printf("%d is greatest", c);
        }
        else
        {
            printf("%d is greatest", a);
        }
    }
    else
    {
        if (b > a)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", a);
        }
    }
}