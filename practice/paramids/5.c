#include <stdio.h>
int main()
{
    int a;
    printf("Enter levels of parmid.\n");
    scanf("%d", &a);

    for (int i = a; i >  0; i--)
    {
        printf("\n");
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
    }
}