#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter a no." << endl;
    cin >> i;
    int n=i%2;
    if (n==0)
    {
        cout << "The no. is even";
    }
    else
    {
        cout << "The no. is odd";
    }
    
    return 0;
}