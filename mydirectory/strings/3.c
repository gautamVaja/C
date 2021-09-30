#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10], s3[20];
    printf("Enter two strings\n");
    gets(s1);
    int n1 = strlen(s1);
    gets(s2);
    int n2 = strlen(s2);
    puts(s1);
    puts(s2);

    // char s3[20] = strcat(s1, s2);
    strcpy(s3, s1);
    puts(s3);
    printf(" ");
    for (int i = 0; i < (n2+1); i++)
    {
        s3[n1 + 2 + i] = s2[i];
    }
    // for (int i = 0; i < (19 - n1 - n2); i++)
    // {
    //     s3[n1 + n2 + 1 + i] = '\0';
    // }

    puts(s3);
    return 0;
}