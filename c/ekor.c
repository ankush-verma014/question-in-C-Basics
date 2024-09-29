#include <stdio.h>

int main() {
    int rows = 4;
    int columns = 5;

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < columns; j++) { // Inner loop for columns
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
