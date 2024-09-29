#include <stdio.h>

int main() {
    float a, b, perimeter;

    // Taking input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &b);

    // Calculating the perimeter
    perimeter = 2 * (a + b);

    // Displaying the result
    printf("Perimeter of the rectangle = %.2f units\n", perimeter);

    return 0;
}
