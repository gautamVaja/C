#include <stdio.h>

int main()
{
    int i, j = 1, r;
    printf("Enter a number\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("1 is nor a prime neither a composite\n");
    }

    else
    {
        //  printf("inside else\n");
        while (j < i)
        {
            // printf("inside loop\n");
            r = i % j;
            if (r == 0 && j != 1)
            {
                printf("%d is not prime\n", i);
                printf("And smallest divisor is %d\n", j);
                goto gautam;
            }
            j++;
        }
        printf("%d is prime\n", i);
    }

    // printf("if is over\n");

    // printf("%d is prime\n",i);

gautam:
    printf("Happy ending\n");
}