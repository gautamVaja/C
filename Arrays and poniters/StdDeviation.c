#include <stdio.h>
#include <math.h>
float avg(float a[], int size);
float std(float a[], int size);
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
    printf("The standard deviation of numbers stored in array is %f.", std(arr, i));
}
float std(float a[], int size)
{
    float av, sum = 0, p,variance;
    av = avg(a, size);
    for (int i = 0; i < size; i++)
    {
        if ((a[i] < av))
        {
            p = av - a[i];
        }
        else
        {
            p = a[i] - av;
        }

        sum = sum + (p * p);
    }
    variance=sum/size;
    printf("variance is %f\n",variance);
return sqrt(variance);
}
float avg(float a[], int size)
{
    float sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum = a[j] + sum;
    }
    return sum / size;
}