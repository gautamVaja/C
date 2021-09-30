#include <stdio.h>
// #include "a.c"
// int a=9;
int main()
{
     extern int a;
    // extern int a=98;  //this is wrong
    // int a=8;
    printf("a is %d", a);

    return 0;
}
