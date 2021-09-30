#include <stdio.h>

int checkprime(int n);

int main()
{
    int i, j, u = 0;
    printf("Enter two nnumbers\n");
    scanf("%d %d", &i, &j);
    // printf("%d %d",i,j);
    for (int a = i; a <= j; a++)
    {
        // printf("%d\n",a);
        u = checkprime(a);
        if (u == 1)
        {
            printf("%d\n", a);
        }
    }
}

int checkprime(int n)
{
    // printf("Inside functon");
    int b;
    for (int k = 1; k <= n; )
    {
        printf("%d\n",k);
        b = n % k;
        if (b == 0 && k != 1)
        {
           return 1;
        }
        else
        {
           return 0;
        }
        k++;
        
    }
   
}