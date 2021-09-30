#include <stdio.h>
int main()
{
    int a = 9, *b;
    b=&a;
    // *b=&a; this is wrong address of a get stores in a not in *b
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("*b=%d\n", *b);
}