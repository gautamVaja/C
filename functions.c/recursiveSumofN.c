#include <stdio.h>
int sum(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else if (n > 1)
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int a, s;
    printf("Enter a no.\n");
    scanf("%d", &a);
    s = sum(a);
    printf("Sum is %d", s);
}