#include <stdio.h>

int main()
{
    int i,a=0;

    printf("Enter a number\n");
    scanf("%d",&i);
    
    while (i!=0)
    {
       i/=10;
       ++a;
    }

    printf("%d",a);
    return 0;

}