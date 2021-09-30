#include <stdio.h>
int prime(int n)
{
    int b;

    // while (n < 1)
    // {
    //     n++;
    // }

    for (int i = 1; i < n; i++)
    {
        b = n % i;
        if (b == 0 && i != 1)
        { 
            printf("this is if1 with i=%d n=%d\n",i,n);
            return 1;
        }
        else if (i != 1 && b != 0)
        {
            printf("this is if2 with i=%d n=%d\n",i,n);
            return 0; //this is for prime
        }
        else if (n==2)
        {
            printf("this is if3 with i=%d n=%d\n",i,n);
            return 0; //this is for prime
        }
        
        
    }
}
//used variables n,b,i
int main()
{
    int a, u, v, flag = 0, j = 2;
    printf("Enter the no.\n");
    scanf("%d", &a);

    for (; j <= a; j++)
    {
        u = prime(j);
        v = prime(a - j);
        if (u == 0)
        {
            if (v == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("This is right no.\n");
        printf("%d+%d=%d", j, a - j, a);
    }
    else
    {
        printf("This is not right no.\n");
    }
}
