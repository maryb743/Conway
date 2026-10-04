#include <stdio.h>
#include "life.h"

void dump_field(int field[HEIGHT][WIDTH])
{
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            printf(field[y][x] ? "O " : ". ");
        }

        printf("\n");
    }

    printf("\n");
}

int main(void)
{
    int field[HEIGHT][WIDTH] = {0};

    // Glider
    field[1][2] = ALIVE;
    field[2][3] = ALIVE;
    field[3][1] = ALIVE;
    field[3][2] = ALIVE;
    field[3][3] = ALIVE;

    for (int i = 0; i < 10; i++)
    {
        printf("Generation %d:\n", i);
        dump_field(field);
        evolve(field);
    }

    return 0;
}
