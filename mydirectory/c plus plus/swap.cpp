#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    t = b;
    b = a;
    a = t;
    cout << "The swaped numbers are " << a << " and " << b;
    return 0;
}