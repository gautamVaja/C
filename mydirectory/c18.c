#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element",i);
        scanf("%f", &a[i]);
    }
/*
n=5
0=4
1=3
2=2
3=1
4=0
*/

printf("Reversed array is as follws\n");
    for (int i = 0; i < n; i++)
    {
        printf("%dth element is %f\n",i,a[n-i-1]);
    }
    return 0;
}
