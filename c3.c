#include <stdio.h>

int main()
{
    int num,res;

    printf("enter a number\n");
    scanf("%d",num);

    res=num%2;
    
    if (res==0)
    {
        printf("number is even");
    }

    else
    {
        printf("number is odd");
    }
     
     return 0;

}