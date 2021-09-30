// Move all the negative elements to one side of the array 
#include <iostream>
using namespace std;
int n = 0;
void display(int *ar)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
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
int main()
{
    int *a = create();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (a[i] > 0 && a[j] < 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] > 0)
        {
            i++;
        }
        else if (a[j] < 0)
        {
            j--;
        }
    }
    cout << "Your array is " << endl;
    display(a);

    delete[] a;
    return 0;
}