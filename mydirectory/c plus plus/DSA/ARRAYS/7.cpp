//Write a program to cyclically rotate an array by one.
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
void rotate(int *a)
{
    int temp, i;
    temp = a[0];
    for (i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[i] = temp;
    cout << "Rotated array is " << endl;
    display(a);
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
    rotate(a);
    delete []a;
    return 0;
}