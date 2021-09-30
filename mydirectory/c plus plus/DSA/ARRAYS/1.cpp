#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int n;
    cout << "Enter size of arrry" << endl;
    cin >> n;
    int *p = new int[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(p[i], p[j]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}