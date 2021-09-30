#include <stdio.h>
#include <string.h>

typedef struct emp
{
    char name[17];
    char Licence_id[10];
    char route[15];
    int kms;    
}em;
int main()
{
    int n;
    printf("Enter no. of employees\n");
    scanf("%d",&n);
    em e[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your name:\n");
        gets(e[i].name);
        printf("Enter your Licence_id:\n");
        gets(e[i].Licence_id);
        printf("Enter your route:\n");
        gets(e[i].route);
        printf("Enter your kms travelled:\n");
        scanf("%d",&e[i].kms);
        // gets(e1.name);
        // scanf("%s",&e1.name);
    }
    printf("Your list if employees data is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("For employee no.%d\n",i+1);
        puts(e[i].name);
        puts(e[i].Licence_id);
        puts(e[i].route);
        printf("%d",e[i].kms);
    }
    
    
}
