#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter first matrix\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("Enter element of %d%d :", i, j);
            scanf("%d", &a[i - 1][j - 1]);
        }
    }
    int b[r][c];
    printf("Enter second matrix\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("Enter element of %d%d :", i, j);
            scanf("%d", &b[i - 1][j - 1]);
        }
    }
    //adding two matrix
    int sum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    //printimg result in matrix like formate
}