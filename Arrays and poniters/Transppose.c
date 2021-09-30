#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the no. of rows and columns\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element of %d%d: ", j + 1, i + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose is: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}