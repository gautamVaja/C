#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter no. of elements\n");
    scanf("%d",&i);

    int a[i],*p;
    for (int j = 0; j < i; j++)
    {
        printf("Enter element: ");
        scanf("%d",&a[j]);
    }
//    p=a;//both are same
   p=&a[0];
    printf("Eneter no.\n");
    scanf("%d",&n);
    printf("Element of ondex no. %d is %d\n",n,a[n]);
    printf("Element of ondex no. %d is %d\n",n,*(a+n));
    printf("Element of ondex no. %d is %d\n",n,*(p+n));

}