#include <ncurses.h>
#include "game.h"
#include "draw.h"
#include "input.h"

int main()
{
    initscr();
    noecho();
    cbreak();
    curs_set(0);

    Setup();

    while (!game_over)
    {
        Draw();
        Input();
        Logic();
    }

    End();

    endwin();
    return 0;
}
