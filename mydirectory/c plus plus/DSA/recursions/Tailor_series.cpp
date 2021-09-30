#include <iostream>
using namespace std;
int n;
int exp(int x, int i)
{
    static int ans = 1;
    if (i < n)
    {
        ans = ans + (x / i) * exp(x, i + 1);
    }
    else
    {
        return ans;
    }
    
}
int main()
{
    int a, x;
    cout << "Enter your nth term" << endl;
    cin >> n;
    cout << "Enter x" << endl;
    cin >> x;
    int i = 1;
    int ans = exp(x, i);
    cout<<exp(x, i)<<endl;

    return 0;
}