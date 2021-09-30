#include <iostream>
using namespace std;
int m, n;
int *create(int &size)
{
    int *a;
    cout << "Enter size of array" << endl;
    cin >> size;
    a = new int[size];
    cout << "Enter your array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    return a;
}
void display(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
void unioin(int *a, int *b)
{
    int u[m + n];
    int k = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            u[k] = a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            u[k] = a[i];
            i++;
            k++;
        }
        else
        {
            u[k] = b[j];
            k++;
            j++;
        }
    }
    for (; i < n; i++)
    {
        u[k] = a[i];
        k++;
    }
    for (; j < m; i++)
    {
        u[k] = b[j];
        k++;
    }

    cout << "Union is " << endl;
    display(u, k + 1);
}
void Intersec(int *a, int *b)
{
    int in[min(m, n)];
    int k = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            in[k] = a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
            k++;
        }
        else
        {
            k++;
            j++;
        }
    }
    for (; i < n; i++)
    {
        in[k] = a[i];
        k++;
    }
    for (; j < m; i++)
    {
        in[k] = b[j];
        k++;
    }
    cout << "Intersection is " << endl;
    display(in, k + 1);
}
int main()
{
    int *a = create(n);
    int *b = create(m);
    cout << m << " " << n << endl;
    unioin(a, b);
    Intersec(a, b);

    delete[] b;
    delete[] a;
    return 0;
}