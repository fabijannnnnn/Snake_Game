#ifndef __GAME_H__
#define __GAME_H__

extern bool game_over;
extern int x, y, FruitX, FruitY, score;
extern int TailX[100], TailY[100];
extern int nTail;
extern const int height, width;

// TODO: dat globalne premenne do classy
enum Direction
{
    up,
    down,
    left,
    right,
    stop
};
extern Direction dir;

void Setup();
void Logic();

#endif
