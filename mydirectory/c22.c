#include <stdio.h>
#include <string.h>
int main()
{
    FILE *p = NULL;
    int n, pd, o;
    char name[10], pdt[15], outlet[25], t[118];
    printf("Enter your name:\n");
    scanf("%s", name);
    n = strlen(name);
    printf("Enter your pdt:\n");
    scanf("%s", pdt);
    pd = strlen(pdt);
    printf("Enter your outlet:\n");
    scanf("%s", outlet);
    o = strlen(outlet);

    printf("The template:\n");
    p = fopen("file.txt", "r+");

    fscanf(p, "%s", t);
    int tt = strlen(t);
    printf("Size is  %d\n", tt);

    for (int i = 0; i < tt; i++)
    {
        char temp = t[i];
        printf("%c",temp);
        if (temp == '_')
        {
            printf("\b ");
        }
        if (temp=='{')
        {
            
        }
        
    }

    // printf("%s", t);

    fclose(p);
    return 0;
}