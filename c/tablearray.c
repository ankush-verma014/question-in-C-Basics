// #include <stdio.h>

// int main() {
//     int a, b, temp;

//     // Input values for a and b
//     printf("Enter value for a: ");
//     scanf("%d", &a);
//     printf("Enter value for b: ");
//     scanf("%d", &b);

//     // Swapping process
//     temp = a;
//     a = b;
//     b = temp;

//     // Output the swapped values
//     printf("After swapping:\n");
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);

//     return 0;
// }

#include<stdio.h>

int main () {
    int a, b;

    printf("Enter a value :");
    scanf("%d" ,&a);

    printf("Enter b value :");
    scanf("%d" ,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    

    printf(" a = %d \n", a);
    printf(" b = %d \n", b);
}
