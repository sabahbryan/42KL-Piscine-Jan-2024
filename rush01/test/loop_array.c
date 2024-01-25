#include <stdio.h>

int main(void)
{
    int grid[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int row = 0, col;

    while (row < 4) {
        col = 0;
        while (col < 4) {
            printf("%d ", grid[row][col]);
            col++;
        }
        printf("\n");
        row++;
    }
}
