// #include<stdio.h>

// void reverse(int arr[] , int n);
// // void printarr(int arr[], int n);

// int main () {
//  int arr[] ={1, 2, 3, 4, 5, };
//  reverse(arr, 5);
// //  printarr(arr, 5);

//  return 0;
// }

// // void printarr(int arr[], int n){
// // for(int i = 0; i <n; i++)
// // {
// //     printf("%d \t", arr[i]);
// // }
// //    printf("\n");
// // }
// void reverse(int arr[] , int n) {
//     for(int i = 0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i] = secondval;
//         arr[n-i-1] = firstval;
//           printf("%d \t", arr[i]);

//     }
    
// }

#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;  
    int actualSum = 0;

    
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    
    return totalSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};  
    int n =  sizeof(arr) /sizeof(arr[0]) + 1  ; 
    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}