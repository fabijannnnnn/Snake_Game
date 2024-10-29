#include <ncurses.h>
#include "game.cpp"
#include "draw.cpp"
#include "input.cpp"

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
