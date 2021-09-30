#include <stdio.h>

int main()
{
    int i, j, res = 0, g;
    // g=i;
    // it will take garbeg value
    printf("Enter a number\n");
    scanf("%d", &i);

    g = i;
    while (i != 0)
    {
        j = i % 10;
        res = j + res * 10;
        // printf("reversed number is %d\n",res);
        // it will show stepby step output
        i /= 10;
    }
    printf("reversed number is %d\n", res);

    if (res == g)
    {
        printf("%d is pallindrom", g);
    }
    else
    {
        printf("%d is not pallindrom", g);
    }

    return 0;
}