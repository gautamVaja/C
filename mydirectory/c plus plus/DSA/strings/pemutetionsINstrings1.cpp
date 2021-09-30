#include <iostream>
#include <cstring>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n--);
    }
}
void swap(char *a, char *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int permute(char *s)
{
    static int count = 0;
    int n = strlen(s);
    char *s_copy = new char[n + 1];
    strcpy(s_copy, s);
    for (int j = 1; j < n; j++)
    {
        swap(&s[0], &s[j]);
        if (count < fact(n))
        {
            puts(s);
            count++;
        }
        else
        {
            break;
        }
        permute(s);
        strcpy(s, s_copy);
    }
    delete[] s_copy;
}
int main()
{
    char s[19];
    gets(s);
    int n = strlen(s);
    string str[fact(n)];
    cout << "All permutations " << endl;
    permute(s);

    return 0;
}