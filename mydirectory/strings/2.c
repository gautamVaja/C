#include <stdio.h>
#include <string.h>
int main()
{
  char str[30];
  printf("Enter a string\n");
  gets(str);
  int f = 1, j;
  int n = strlen(str);

  for (int i = 0; i < n; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' '))
    {
      printf("%c", str[i]);
      f = 0;
    }
    else
    {
      j = i;
      while ((str[j + 1] >= 'a' && str[j + 1] <= 'z') || (str[j + 1] >= 'A' && str[j + 1] <= 'Z') || (str[j + 1] == ' '))
      {
        str[j] = str[j + 1];
        j++;
      }
    }

    // if (f == 1)
    // {
    //   // printf("Inside f if\n");
    //   str[i] = str[i + 1];
    // }
  }
  printf("\n");
  puts(str);
  return 0;
}


//this is wrong