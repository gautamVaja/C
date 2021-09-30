#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("Enter levels of paramid.\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            //  printf("%d ", i+j);
            printf("%d ", b);
            b++;
        }
    }
}