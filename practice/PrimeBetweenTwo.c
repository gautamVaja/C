#include <stdio.h>
int main()
{
    int i, j, a ,r ,n ,b;
    int count=0;
    printf("Enter start and end\n");
    scanf("%d %d", &i, &j);
    if (i>j)
    {
        printf("Please start with small\n");
    }
    else if (i==j)
    {
        printf("Please enter different numbers\n");
    }
    
    // printf("Enter end\n");
    // scanf("%d", &j);
    for (a = i; a <= j; a++)
    {
        for (r=1; r<a; r++)
        {
            n= a%r;
            if (n==0 && r!=1)
            {
                b=a;
            }
            
        }
        if (a==i)
        {
            printf("Prime no. are\n");
        }
        if (a==1)
        {
            printf("1 is nor a prime neither a composite\n");
        }
        
        if (a!=b && a!=1)
        {
            
           printf("%d\n",a);
           count++;
        }
        
    }
    printf("%d",count);
}