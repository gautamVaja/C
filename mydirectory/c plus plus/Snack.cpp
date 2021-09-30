#include <iostream>
using namespace std;
int height = 20;
int width = 20;
static int x, y; //for snack
int fx, fy;      //for fruit
static bool flag = 0;
char direction;

void setup()
{
    x = 10, y = 10;
    fx = rand() % 20;
    fy = rand() % 20;
}
void draw()
{
    // clrscr();
    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == 19)
        {
            for (int j = 0; j < width; j++)
            {
                cout << "# ";
            }
        }
        else
        {
            for (int j = 0; j < 20; j++)
            {
                if (i == x && j == y)
                {
                    cout << "0 ";
                    continue;
                }
                if (i == fx && j == fy)
                {
                    cout << "f ";
                    continue;
                }
                if (j == 0 || j == 19)
                {
                    cout << "# ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}
void play()
{
    cout << "lets start the game" << endl;
    cout << "for right > left < up ^ down d " << endl;
    cin >> direction;
    switch (direction)
    {
    case '>':
    for (int k = 0; k < 30; k++)
    {
        x++;
        draw();
        break;
    }   
    case '<':
        x--;
        draw();
        break;
    case '^':
        y++;
        draw();
        break;
    case 'd':
        y--;
        draw();
        break;

    default:
        cout << "Please enter valid character" << endl;
        break;
    }
}
void logic()
{
}
int main()
{
    setup();
    draw();
    play();
    return 0;
}