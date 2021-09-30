#include <stdio.h>
int avg(int a[], int size);

int main()

{
    int i;
    printf("Enter a no.\n");
    scanf("%d", &i);
    int a[i];
    for (int j = 0; j < i; j++)
    {
        printf("Enter number ");
        // scanf("%f", &a[j]);
        scanf("%d", a + j );
        // to see only that a always points to a[0].
        // i.e. a=&a[0] and *a=a[0] and *(a+i)=a[i].
    }

    printf("Avarage is %d", avg(a, i));
}
int avg(int a[], int size)
{
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum = a[j] + sum;
    }
    return sum / size;
}
