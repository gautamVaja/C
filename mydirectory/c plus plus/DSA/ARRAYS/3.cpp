#include <iostream>
int n, max = 0;
using namespace std;
int maxindex(int *p,int j)
{
    int im;
    for (int i = 0; i < n-j; i++)
    {
        if (p[i] != -1)
        {
            if (p[i] > ::max)
            {
                ::max = p[i];
                cout<<::max <<" " << i <<endl;
                im = i;
            }
        }
    }
    return im;
}
int main()
{
    int k;
    cout << "Enter the no. of elements" << endl;
    cin >> n;

    int *a = new int[n];
    cout << "Enter your array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the maximum you want" << endl;
    cin >> k;

    int maxIndex = 0;
    for (int j = 0; j < k - 1; j++)
    {
        maxIndex = maxindex(a,j);
        a[maxIndex] = -1;
    }

    cout << "Your answer is " << (::max) << endl;
    return 0;
}