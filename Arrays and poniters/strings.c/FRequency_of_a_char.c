#include <stdio.h>
#include <string.h>
int main() //try for word
{
    // printf("NULL is \0\n");
    char sent[80], c ,choice[10],word[30];
    int l, j = 0;
    printf("Enter the sentence\n");
    gets(sent);
    // puts(sent);
    l = strlen(sent);
    printf("Length is %d\n", l);

    // printf("What you want letter or a word?\n");
    // gets(choice);
    // int ch=strcmp("word",choice);
    
    // if (ch==0)
    // {
    //     printf("Enter the desired word\n");
    //     gets(word);


    // }
    

    printf("Enter the letter which you want to search\n");
    scanf("%c", &c);
    printf("You have entered %c\n",c);

    for (int i = 0; i < l; i++)
    { 
        // printf("%c",sent[i]);
        // if (sent[i]=='\0')
        // {
        //     printf("here is null");
        // }
        
      
        char d=sent[i];
        if  (c==d)
        {
            j++;
        }
    }

    printf("The frequency of %c is %d",c,j);
}