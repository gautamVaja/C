// Program to Check Alphabet



#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
  
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.\n", c);
    else
        printf("%c is not an alphabet.\n", c);
  printf("%d\n", c);
  printf("%d", &c);


    return 0;
}