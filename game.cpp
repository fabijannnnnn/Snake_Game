#include "game.h"
#include <cstdlib>
#include <ncurses.h>

bool game_over;
const int height = 20, width = 20;
int x, y, FruitX, FruitY, score;
int TailX[100], TailY[100];
int nTail = 0;
Direction dir;

void Setup()
{
    game_over = false;
    dir = stop;
    x = width / 2;
    y = height / 2;
    FruitX = (rand() % width) + 1;
    FruitY = (rand() % height) + 1;
    score = 0;
}

void Logic()
{
    int prevX = TailX[0];
    int prevY = TailY[0];
    int prev2X, prev2Y;

    TailX[0] = x;
    TailY[0] = y;

    for(int i = 1; i < nTail; i++)
    {
        prev2X = TailX[i];
        prev2Y = TailY[i];
        TailX[i] = prevX;
        TailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
        case up:
             y--;
            break;
        case down:
            y++;
            break;
        case left:
            x--;
            break;
        case right:
            x++;
            break;
        default:
            break;
    }


    if(x > width || x < 1 || y < 1 || y > height)
    {
        game_over = true;
    }

    if(x == FruitX && y == FruitY)
    {
        score++;
        FruitX = (rand() % width) + 1;
        FruitY = (rand() % height) + 1;
        nTail++;
    }

    for(int i = 0; i < nTail; i++)
    {
        if(TailX[i] == x && TailY[i] == y)
        {
            game_over = true;
        }
    }
}
