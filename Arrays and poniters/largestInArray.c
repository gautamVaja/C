#include <stdio.h>
float large(float a[], int size);
int main()
{
    int i;
    printf("Enter the no. elements in array\n");
    scanf("%d", &i);
    float arr[i];
    for (int j = 0; j < i; j++)
    {
        printf("Enter number ");
        // scanf("%d", &arr[j]);
        scanf("%f", arr + j);
        // to see only that arr always points to arr[0].
        // i.e. arr=&arr[0] and *arr=arr[0] and *(arr+i)=arr[i].
    }
    printf("The largest number stored in array is %f.", large(arr, i));
}
float large(float a[], int size)
{
    float l=a[0];
    for (int i = 0; i < size; i++)
    {
        if (l<a[i])
        {
            l=a[i];
        }
        
    }
    return l;
}
