#include <iostream>
using namespace std;
int n;
int min(int *p)
{
    int min = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i] < min)
        {
            min = p[i];
        }
    }
    return min;
}
int max(int *p)
{
    int max = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }
    return max;
}

int main()
{
    int n, l, h, sum;
    cout << "Enter no. of elements" << endl;
    cin >> n;
    int *a, *H;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter your sum" << endl;
    cin >> sum;
    l = min(a);
    h = max(a);

    H = new int[h + 1];
    H[0] = 0;

    for (int i = 0; i < n; i++)
    {
        H[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (H[sum - a[i]] > 0)
        {
            cout << sum << "=" << a[i] << "+" << sum - a[i] << endl;
        }
    }

    delete a;
    delete H;
    return 0;
}