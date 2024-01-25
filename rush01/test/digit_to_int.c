#include <stdio.h>

int charToDigit(char c) {
    if (c >= '0' && c <= '9') {
        // Subtracting the ASCII value of '0' converts the character to its corresponding integer
        return c - '0';
    } else {
        // Return -1 for non-digit characters or handle the error as needed
        return -1;
    }
}

int main() {
    char digitChar = '7';  // Replace with the desired character digit
    int digit = charToDigit(digitChar);

    if (digit != -1) {
        // Print the converted digit
        printf("Converted digit: %d\n", digit);
    } else {
        // Handle the error case
        fprintf(stderr, "Error: Not a digit character\n");
    }

    return 0;
}
