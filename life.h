#ifndef LIFE_H
#define LIFE_H

#define WIDTH 20
#define HEIGHT 20
#define ALIVE 1
#define DEAD 0

int count_alive(int field[HEIGHT][WIDTH], int x, int y);
void evolve(int field[HEIGHT][WIDTH]);

#endif
