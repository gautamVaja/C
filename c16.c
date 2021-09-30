#include <stdio.h>
int swap1(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int swap2(int c, int d);
int main()
{
    int i,j;
    printf("Enter two no.s\n");
    scanf("%d %d",&i,&j);
    printf("Entered no.s are %d and %d\n",i,j);
    swap1(&i,&j);
    printf("Swaped no.s are %d and %d by swap1\n",i,j);
    swap2(i,j);
    printf("Swaped no.s are %d and %d by swap2",i,j);
}
int swap2(int c, int d)
{
int t2;
t2=c;
c=d;
d=t2;
printf("swapped no.s inside function are %d and %d\n",c,d);
}