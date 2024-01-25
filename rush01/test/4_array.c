#include <stdio.h>

int main() {
    int iteration = 0;

    while (iteration < 4) {
        // Define a 4x4 grid array and manually assign values
        int grid[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        // Initialize variables for row and column indices
        int row = 0, col;

        // Print the iteration number
        printf("Iteration %d:\n", iteration + 1);

        // Nested while loop: Loop through the grid and print values
        while (row < 4) {
            col = 0;
            while (col < 4) {
                printf("%d ", grid[row][col]);
                col++;
            }
            printf("\n");
            row++;
        }

        // Move to the next iteration
        iteration++;

        // Add a separator line between iterations
        printf("\n-----------------\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}

