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
        for (int j = 1; j <= a - i; j++)
        {
            printf("  ");
        }

        //for starting wale no. till max
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", i + k - 1);
        }

        //for remaing no.
        for (int m = 2 * i - 2; m >= i; m--)
        {
            printf("%d ", m);
        }
    }
}