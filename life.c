#include "life.h"

int count_alive(int field[HEIGHT][WIDTH], int x, int y)
{
    int count = 0;

    for (int dy = -1; dy <= 1; dy++)
    {
        for (int dx = -1; dx <= 1; dx++)
        {
            if (dx == 0 && dy == 0)
                continue;

            int nx = x + dx;
            int ny = y + dy;

            if (nx >= 0 && nx < WIDTH && ny >= 0 && ny < HEIGHT)
                count += field[ny][nx];
        }
    }

    return count;
}

void evolve(int field[HEIGHT][WIDTH])
{
    int next[HEIGHT][WIDTH];

    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            int alive = count_alive(field, x, y);

            if (field[y][x] == ALIVE)
            {
                next[y][x] = (alive == 2 || alive == 3) ? ALIVE : DEAD;
            }
            else
            {
                next[y][x] = (alive == 3) ? ALIVE : DEAD;
            }
        }
    }

    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            field[y][x] = next[y][x];
        }
    }
}
