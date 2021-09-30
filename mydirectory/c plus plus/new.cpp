// A school method based C++ program to check if a
// number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int count = 0;
    cout << "hi" << endl;
    for (int i = 1; i < 1; i++)
    {
        for (int j = 1; j < 1025; j++)
        {
            int u = i + j;
            if (u == 1024)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
