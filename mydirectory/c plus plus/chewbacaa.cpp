#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n, newnum = 0;
    int a = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    int digit;
    while (n != 0)
    {
        digit = n % 10;

        if (digit >= 5)
        {
            digit = 9 - digit;
        }

        newnum = newnum + digit * pow(10, a);
        n /= 10;
        a++;
    }

    cout << "output " << newnum << endl;
    // cout << "No, of digits are " << a << endl;
    return 0;
}