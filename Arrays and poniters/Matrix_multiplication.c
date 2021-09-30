#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter number of rows and columns for first matrix\n");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    printf("Enter first matrix\n");
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c1; j++)
        {
            printf("Enter element of %d%d :", i, j);
            scanf("%d", &a[i - 1][j - 1]);
        }
    }

    printf("Enter number of columns for second matrix\n");
    printf("because no. of rows are equal to no. of columns of first matrix\n");
    scanf("%d", &c2);
    r2 = c1;
    int b[r2][c2];
    printf("Enter second matrix\n");
    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            printf("Enter element of %d%d :", i, j);
            scanf("%d", &b[i - 1][j - 1]);
        }
    }
    //multipying them
    printf("The answer is\n");
    int mul[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int k = 0; k < c2; k++)
        {
            int sum = 0;
            for (int j = 0; j < c1; j++) //c1=r2
            {
                sum = sum + (a[i][j] * b[j][k]);
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
