#include <iostream>
#include <cstring>
using namespace std;
int n=0 ;
void f()
{
    cout << n  << " inside f "<< &n << endl;
}
int main()
{
    //  n = 8;
    // cout << n  << " inside main "<< &n << endl;
    // f();

    char s[9]="abc";
    char s3[9];
    strcpy(s3,s);
    puts(s3);
    return 0;
}
