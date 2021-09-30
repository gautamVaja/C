#include <stdio.h>
int main()
{
    int a;
    printf("Enter levels of paramid.\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        //for spaces
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        //for *
        for (int k = 2 * (a + 1 - i) - 1; k >= 1; k--)
        {
            printf("* ");
        }
    }
}