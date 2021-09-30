#include <stdio.h>

int main()
{
    int f = 0, i = 0, num;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (i <= num)
    {
        f = i + f;
        i = i + 1;
        
    }
    printf("%d", f);
}