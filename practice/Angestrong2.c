#include <stdio.h>
int main()
{
    int i, j, original, n = 0, digits, a, b = 1, c, ang = 0;
    printf("Enter a number\n");
    scanf("%d", &i);
    original = i;
    //counting no. of digits
    while (i != 0)
    {
        i /= 10;
        n++;
    }
    printf("Nuber of digits in %d is %d\n", original, n);
    c = n;
    digits = n;
    i = original;
    //now checking for angestrong
    while (i != 0)
    {
        a = i % 10;
        printf("a=%d\n", a);

        n = c;
        b = 1;
        while (n != 0)
        {

            b = b * a;
            n--;
        }
        printf("b=%d\n", b);
        ang = ang + b;
        printf("ang=%d\n", ang);
        i /= 10;
        printf("i=%d\n", i);

        if (ang == original)
        {
            printf("%d is an angestrong number", original);
        }
        else
        {
            printf("%d is not an angestrong number", original);
        }
    }
}