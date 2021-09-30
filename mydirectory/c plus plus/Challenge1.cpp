#include <iostream>
using namespace std;
int main()
{
    long t;
    cout << "Please enter no. of trials" << endl;
    cin >> t;
    long x[t], u;
    for (long i = 0; i < t; i++)
    {
        cout << "Enter the value of x" << endl;
        cin >> x[i];
        for (int a = 0; a < 100; a++) //replace this 100
        {
            for (int b = 0; b < 100; b++)
            {
                u = (a & b) + (a | b);
                if (u == x[i])
                {
                    cout << a << " " << b << endl;
                }
            }
        }
    }

    return 0;
}