#include <iostream>
using namespace std;
int main()
{
    int n, max, min;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int *a = new int[n];
    cout << "Enter your array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            continue;
        }
        if (a[i] > max)
        {
            max = a[i];
            continue;
        }
    }
    cout << "Maximum = " << max << " Mininmum = " << min << endl;

    delete[] a;
    return 0;
}