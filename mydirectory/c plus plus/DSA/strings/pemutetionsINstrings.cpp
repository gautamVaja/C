#include <iostream>
#include <cstring>
using namespace std;
int n;
void display(char *s)
{
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
}
int permute(char *s, int n, int i, int k)
{
    int c,d;
    c=i,d=k;
    int a[n + 1] = {0};
    a[n] = '\0';
    char b[n + 1] = {0};
    b[n] = '\0';
    if (a[i] != '\0' && b[k] != '\0')
    {
        if (a[i] == 0)
        {
            b[k] = s[i];
            k++;
            i++;
        }
        else
        {
            while (a[i] != 0)
            {
                i++;
                if (i > 100)
                {
                    break;
                }
            }
        }
    }
    else
    {
        
    }
    if (b[k] == '\0')
    {
        display(b);
    }

    return 0;
}
int main()
{
    char s[10];
    cout << "Enter your string" << endl;
    gets(s);
    n = strlen(s);

    permute(s, n, 0, 0);
    return 0;
}