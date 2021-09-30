#include <stdio.h>
int pow1(int i, int j) //here for i^j
{
    if (j != 0)
    {
        return i * pow1(i, j - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a, b;
    printf("Enter the no. and its power\n");
    scanf("%d %d", &a, &b);
    // here a^b
    printf("%d^%d=%d", a, b, pow1(a, b));
}