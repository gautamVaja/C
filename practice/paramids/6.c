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
            printf("%d",i+1-j);
            // printf("%d",a+1-j);
             
            // printf("%d",j);
            // printf("%d",i);
        }
        //  printf("\n");
        // for (int k = i;  k > 0; k--)
        // {
        //     printf("%d",a+1-k);
        // }
        
    }

}