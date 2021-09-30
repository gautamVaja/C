#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter length of array" << endl;
    cin >> n;
    int a[n], g = 0;
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << endl;
        g = 0;
        if (i == 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[j] << endl;
            }
        }
        else
        {
            for (int j = 0; j < n - i + 1; j++)
            {
                g = j;
                for (int h = 1; h <= i; h++)
                {
                    cout << a[g] << " ";
                    g++;
                }
                cout << endl;
            }
        }
    }

    return 0;
}