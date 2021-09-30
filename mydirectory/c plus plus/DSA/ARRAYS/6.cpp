//Find the Union and Intersection of the two sorted arrays.
#include <iostream>
using namespace std;
void display(int *ar, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << ar[i] << endl;
    }
}
class array
{
private:
    int n;

public:
    int *a;
    array(int &n);
    ~array();
    void display(int k);
    friend array unioin(array a, array b);
    friend array Intersection(array a, array b);
};
void array::display(int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << endl;
    }
}

array::array(int &size)
{
    int flag = 19;
    if (size == 0)
    {
        cout << "Enter size of array" << endl;
        cin >> size;
        flag = 0;
    }
    a = new int[size];
    if (flag == 0)
    {
        cout << "Enter your array" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
    }
    n = size;
}
array unioin(array a, array b)
{
    int size1 = a.n + b.n;
    array u(size1);
    int i = 0;
    int j = 0;
    int k = 0;
    cout << "a " << a.n << endl;
    cout << "b " << b.n << endl;
    while (i != a.n && j != b.n)
    {
        if (a.a[i] == b.a[j])
        {
            u.a[k] = a.a[i];
            i++;
            j++;
            k++;
        }
        else if (a.a[i] < b.a[j])
        {
            u.a[k] = a.a[i];
            i++;
            k++;
        }
        else if (a.a[i] > b.a[j])
        {
            u.a[k] = a.a[j];
            j++;
            k++;
        }
    }
    for (; i < a.n; i++)
    {
        u.a[k] = a.a[i];
        i++;
        k++;
    }
    for (; j < b.n; j++)
    {
        u.a[k] = a.a[j];
        j++;
        k++;
    }

    display(u.a, k + 1);
    return u;
}
array Intersection(array a, array b)
{
    int size1 = min(a.n, b.n);
    array In(size1);
    int i = 0;
    int j = 0;
    int k = 0;
    cout << "a " << a.n << endl;
    cout << "b " << b.n << endl;
    while (i != a.n && j != b.n)
    {
        if (a.a[i] == b.a[j])
        {
            In.a[k] = a.a[i];
            i++;
            j++;
            k++;
        }
        else if (a.a[i] < b.a[j])
        {
            i++;
        }
        else if (a.a[i] > b.a[j])
        {
            j++;
        }
    }
    display(In.a, k + 1);
    return In;
}
array::~array()
{
    delete[] a;
}

int main()
{
    int n = 0, m = 0;
    cout << "Enter your two sorted arrays" << endl;
    array ar1(n), ar2(m);
    cout << "Unioin" << endl;
    unioin(ar1, ar2);
    cout << "Intersection" << endl;
    Intersection(ar1, ar2);

    return 0;
}