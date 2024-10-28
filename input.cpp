#include "input.h"
#include "game.h"
#include <ncurses.h>

void Input()
{
    keypad(stdscr, true);
    halfdelay(1);
    int c = getch();
    switch (c)
    {
        case KEY_UP:
        case 'w':
            dir = up;
            break;
        case KEY_DOWN:
        case 's':
            dir = down;
            break;
        case KEY_LEFT:
        case 'a':
            dir = left;
            break;
        case KEY_RIGHT:
        case 'd':
            dir = right;
            break;
        case 27:
            game_over = true;
            break;
    }
}
