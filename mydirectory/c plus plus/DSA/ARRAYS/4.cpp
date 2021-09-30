// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;
void display(int *p, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << p[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int *a = new int[n];
    cout << "Enter your array consisting 0,1,2" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int H[3] = {0};

    display(H, 3);
    for (int i = 0; i < n; i++)
    {
        H[a[i]]++;
    }
    cout << "The H is" << endl;
    display(H, 3);

    int k=0;
    cout << "Your sorted array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < H[i]; j++)
        {
            a[k] = i;
            k++;
        }
    }

    display(a, n);

    delete[] a;
    return 0;
}