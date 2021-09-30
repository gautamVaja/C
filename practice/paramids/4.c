#include <stdio.h>
int main()
{
    char a;
    printf("Ener last alplhabet of paramid.\n");
    scanf("%c", &a);

    for (char i = 'A'; i <= a; i++)
    {
        printf("\n");
        for (char j = 'A'; j <= i; j++)
        {
            // printf("%c", j);
            printf("%c", i);
        }
        //break;
    }
    return 0;
}