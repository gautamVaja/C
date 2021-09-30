#include <stdio.h>
int gau(int *i, int *j);
int main()
{
    int a, b;
    printf("Enter two no.\n");
    scanf("%d %d", &a, &b);
    gau(&a, &b);
    printf("a=%d  b=%d", a, b);
}
int gau(int *i, int *j)
{ 
    int t;
    t =*i;
    *i = *i + *j;
    *j = t - *j;
}