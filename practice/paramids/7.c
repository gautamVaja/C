#include <stdio.h>
int main()
{
    int a;
    printf("Enter levels of paramid.\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        for (int j = 1; j <= a - i; j++)
        {
            printf("  ");
            // break;
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
    }

    // printf("Hi");
}