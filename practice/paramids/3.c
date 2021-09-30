#include <stdio.h>
int main()
{
//  char a;
//     printf("Ener last alplhabet of paramid.\n");
//     scanf("%c",&a);

    for (char i = 'A'; i < 'F'; i++)
    {
        printf("\n");
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c\t", j);
        }
        // break;
    }
    return 0;
}