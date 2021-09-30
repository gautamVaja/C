#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int p1, p2, a = 1, b = 1, c = 1;
    char s1[10];
    char s2[10];
    int scoreC = 0, scoreP = 0;
    srand(time(NULL));
    printf("Lets start stone,paper and scissor\n we will play 3 turns \n ");
    for (int i = 0; i < 3; i++)
    {
        printf("Now Your turn:\n");
        gets(s1);
        // puts(s1);
        printf("Compuer's turn:\n");
        p2 = rand() % 2;
        switch (p2)
        {
        case 0:
            printf("stone\n");
            strcpy(s2, "stone");
            break;
        case 1:
            printf("paper\n");
            strcpy(s2, "paper");
            break;
        case 2:
            printf("scissor\n");
            strcpy(s2, "scissor");
            break;
        default:
            break;
        }
        // puts(s2);

        a = strcmp(s1, "stone");
        b = strcmp(s1, "paper");
        c = strcmp(s1, "scissor");

        if (a == 0) //stone
        {
            if (p2 == 0)
            {
                printf("Match tied\n");
                scoreP++;
                scoreC++;
            }
            if (p2 == 1)
            {
                printf("Computer wins\n");
                scoreC = scoreC + 2;
            }
            if (p2 == 2)
            {
                printf("You wins\n");
                scoreP = scoreP + 2;
            }
        }

        if (b == 0) //paper
        {
            if (p2 == 0)
            {
                printf("You wins\n");
                scoreP = scoreP + 2;
            }
            if (p2 == 1)
            {
                printf("Match tied\n");
                scoreP++;
                scoreC++;
            }
            if (p2 == 2)
            {
                printf("Computer wins\n");
                scoreC = scoreC + 2;
            }
        }

        if (c == 0) //scissor
        {
            if (p2 == 0)
            {
                printf("Computer wins\n");
                scoreC = scoreC + 2;
            }
            if (p2 == 1)
            {
                printf("You wins\n");
                scoreP = scoreP + 2;
            }
            if (p2 == 2)
            {
                printf("Match tied\n");
                scoreP++;
                scoreC++;
            }
        }
    }

        if (scoreC>scoreP)
        {
            printf("Computer wins");
        }
        else
        {
            printf("You wins");
        }
        
        
    // printf("The random no. between 1 to 6 is :%d\n", (rand() % 5 + 1));
    // return 0;
}
