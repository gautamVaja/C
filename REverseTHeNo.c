#include <stdio.h>

int main()
{
    int i,j;

    printf("Enter a number\n");
    scanf("%d", &i);

    while (i != 0)
    {
        j=i%10;

        // i %= 10;
        printf("%d", j);
        i /= 10;
    }

    return 0;
}