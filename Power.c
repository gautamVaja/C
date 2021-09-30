#include <stdio.h>

int main()
{
        int b, p, res = 1, i = 0;
        printf("Enter base\n");
        scanf("%d", &b);
        printf("Enter power\n");
        scanf("%d", &p);
        while (i < p)
        {
                res = res * b;
                ++i;
        }
        printf("you want %d^%d\n", b, p);
        printf("Your answer is %d\n", res);

        return 0;
}