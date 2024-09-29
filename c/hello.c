// #include <stdio.h>

// int main() {
//     int num, sum = 0;

//     // Input a number from user
//     printf("Enter any number to check if it is a perfect number: ");
//     scanf("%d", &num);

//     // Calculate sum of all proper divisors
//     for(int i = 1; i <= num / 2; i++) {
//         if(num % i == 0) {
//             sum += i;
//         }
//     }

//     // Check whether the sum of proper divisors is equal to num
//     if(sum == num && num > 0) {
//         printf("%d is a PERFECT NUMBER\n", num);
//     } else {
//         printf("%d is NOT a PERFECT NUMBER\n", num);
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, i, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n <= 1) {
//         printf("%d is not a prime number.\n", n);
//         return 0;
//     }

//     for (i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             count = 1;
//             break;
//         }
//     }

//     if (count == 0)
//         printf("%d  prime number.\n", n);
//     else
//         printf("%d not a prime number.\n", n);

//     return 0;
// }




#include<stdio.h>
 int main() {
    int n;

    printf("Enter a number");
    scanf("%d",&n);

    for (int i = 100; i >1; i--)
    {
        printf("%d ",i);
    }
    return 0;
    
 }