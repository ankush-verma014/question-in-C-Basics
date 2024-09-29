#include <stdio.h>

// Function to add two numbers
int add(int x, int y) {
    return x + y;
}

int main() {
    int num1, num2, sum;

    // Taking input from the user
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function to add the numbers
    sum = add(num1, num2);

    // Printing the result
    printf("Sum: %d\n", sum);

    return 0;
}
