//maximum subarray sum// i can't find the mistake.
#include <iostream>
using namespace std;
int n;
int *create()
{
    int *a;
    cout << "Enter size of array" << endl;
    cin >> n;
    a = new int[n];
    cout << "Enter your array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
void display(int *ar)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
int max(int *a)
{
    int max = a[0], mi;
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            mi = i;
        }
    }
    return mi;
}
int Sum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int maxSubArr(int *a)
{
    int *sum = new int[n * (n + 1) / 2];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int *subarray = new int[j - i + 1];
            for (int k = i; k <= j; k++)
            {
                int m = 0;
                subarray[m] = a[k];
                m++;
            }
            sum[s] = Sum(subarray, j - i + 1);
            s++;
            delete[] subarray;
        }
    }
    int max_sum = max(sum);
    return max_sum;
    delete[] sum;
}
int main()
{
    int *a = create();
    int x = maxSubArr(a);
    cout << "Your answer is " << x << endl;
    delete[] a;
    return 0;
}