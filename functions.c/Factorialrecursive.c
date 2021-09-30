#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int a, f;
    printf("Enter a no.\n");
    scanf("%d", &a);
    f = fact(a);
    printf("Factorial is %d", f);
}