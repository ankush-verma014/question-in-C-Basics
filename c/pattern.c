// #include<stdio.h>
// void main(){
//     int i, j;
//     for(i=1; i<=4; i++)
//     {
       
//         for (j = 1; j <=4; j++)
//         {
//             printf("*");

//         }
//         printf("\n");
        
//     }
// }


// #include<stdio.h>
// void main() {

//     int i,j;
//     for ( i = 1; i <=1000; i++)
      
//     {
//         for(j = 1; j<=i; j++){
//             printf("*");

//         }
//         printf("\n");
//     }
    
// }


#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
