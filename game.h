#ifndef GAME_H
#define GAME_H

extern bool game_over;
extern int x, y, FruitX, FruitY, score;
extern int TailX[100], TailY[100];
extern int nTail;
extern const int height, width;
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
