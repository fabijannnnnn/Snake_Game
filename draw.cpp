#include "draw.h"
#include "game.h"
#include <ncurses.h>

void Draw()
{
    clear();

    for(int i = 0; i < width + 2; i++)
    {
        mvprintw(0, i, "|");
    }

    for(int i = 0; i < height + 2; i++)
    {
        for(int j = 0; j < width + 2; j++)
        {
            if(i == 0 | i == 21)
            {
                mvprintw(i, j, "=");
            } else if(j == 0 | j == 21)
            {
                mvprintw(i, j, "|");
            } else if( i == y && j == x)
           {
                mvprintw(i, j, "O");
           } else if(i == FruitY && j == FruitX)
            {
                mvprintw(i, j, "X");
            } else
                for(int k = 0; k < nTail; k++)
                {
                    if(TailX[k] == j && TailY[k] == i)
                        mvprintw(i, j, "o");
                }
        }
    }
    mvprintw(23, 0, "Score: %d", score);

    refresh();
}

void End()
{
    clear();
    mvprintw(10, 5, "Game Over... :( Press any key to exit.");
    cbreak();
    refresh();
    getch();
}
