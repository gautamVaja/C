#include <stdio.h>
int main()
{
    int a, b, gcd, r, g1, g2;

    printf("Enter two no.s\n");
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        printf("inside if\n");
        r = b;
        b = a;
        a = r;
        printf("a=%d b=%d\n", a, b);
    }
    //here a>b

    for (int i = 1; i <= a; i++)
    {
        g1 = a % i;
        g2 = b % i;
        if (g1 == 0 && g2 == 0)
        {
            gcd = i;
            printf("%d\n", i);
        }
    }

    printf("GCD is %d", gcd);
}