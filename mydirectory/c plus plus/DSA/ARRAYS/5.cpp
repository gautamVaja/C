// Move all the negative elements to one side of the array
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
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
};
void array::display(int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << endl;
    }
}

array::array(int &n)
{
    cout << "Enter size of array" << endl;
    cin >> n;
    a = new int[n];
    cout << "Enter your array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

array::~array()
{
    delete[] a;
}

int main()
{
    int n = 0;
    array ar(n);
    // cout<<n<<endl;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (ar.a[i] > 0 && ar.a[j] < 0)
        {
            swap(ar.a[i], ar.a[j]);
            i++;
            j--;
        }
        else if (ar.a[i] > 0)
        {
            i++;
        }
        else if (ar.a[j] < 0)
        {
            j--;
        }
    }

    cout << "Your array is" << endl;
    ar.display(n);

    return 0;
}