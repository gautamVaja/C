#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    char *p;

    for (int i = 0; i < 3; i++)
    {
        int n;
        printf("Enter length of your id\n");
        scanf("%d", &n);
        p = (char *)malloc(n * sizeof(char));
        printf("Enter ID of %dth employee \n",i);
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &p[j]);
        }

        printf("ID of %dth employee is \n",i);
        for (int j = 0; j < n; j++)
        {
            printf("%c", p[j]);
        }
        printf("\n");

        free(p);
    }

    return 0;
}
