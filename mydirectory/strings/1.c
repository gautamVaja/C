#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[27];
    printf("Enter a sentence\n");
    gets(sentence);
    int n = strlen(sentence);
    printf("n=%d\n", n);
    int v = 0, c = 0, d = 0, s = 0;

    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            s++;
        }
        else if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            v++;
        }
        else if (sentence[i] >= '0' && sentence[i] <= '9')//this is wrong!!!
        {
            // printf("char %c\n", sentence[i]);
            // printf("int %d\n", sentence[i]);
            d++;
        }
        else
        {
            c++;
        }
    }

    printf("Spaces=%d\n", s);
    printf("Vowels=%d\n", v);
    printf("Consonents=%d\n", c);
    printf("Digits=%d\n", d);

    return 0;
}
//not getting digits???