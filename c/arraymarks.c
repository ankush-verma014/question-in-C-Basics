#include<stdio.h>

int main () {

    int marks[5];

    printf("Enter number  :");
    scanf("%d", &marks[0]);

     printf("Enter number  :");
    scanf(" %d", &marks[1]);

     printf("Enter number  :");
    scanf("%d", &marks[2]);

     printf("Enter number  :");
    scanf(" %d", &marks[3]);

     printf("Enter number  :");
    scanf(" %d", &marks[4]);

    printf("Hindi = %d , English = %d , Math = %d , Physics = %d , Chemistry = %d" , marks[0] , marks[1], marks[2], marks[3], marks[4]);
}