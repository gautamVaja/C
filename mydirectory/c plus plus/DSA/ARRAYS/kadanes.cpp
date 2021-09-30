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
int maxSubArr(int *a)
{
    int maxsum, max_sum = 0, i = 0;

    while (a[i] < 0 && i < n)
    {
        i++;
    }
    if (i >= n)
    {
        return 0;
    }
    else
    {
        int prevsum = maxsum = a[i];
        for (; i < n; i++)
        {
            prevsum = maxsum;
            maxsum = maxsum + a[i];
            if (maxsum < prevsum)
            {
                if (prevsum >= max_sum)
                {
                    max_sum = prevsum;
                }
                maxsum = 0;
            }
        }
        return max(maxsum, max_sum);
    }
}
int main()
{
    int *a = create();
    int x = maxSubArr(a);
    cout << "Your answer is " << x << endl;
    delete[] a;
    return 0;
}