#include <stdio.h>
int main()
{
    int a, i, r;

    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Divisors of %d is/are\n", a);

    for (i = 1; i <= a; i++)
    {
        r = a % i;
        if (r == 0)
        {
            printf("%d\n", i);
        }
    }
}