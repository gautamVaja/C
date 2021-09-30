#include <stdio.h>

int main()
{
    int f = 1, i = 1, num;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (i <= num)
    {
        f = i * f;
        i = i + 1;
        
    }
    printf("%d", f);
}