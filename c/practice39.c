#include<stdio.h>

void printAddress(int *n);

int main () {
     int n = 4;
     printf("%u \n" , &n);
     printAddress(&n);
     return 0;
}

void printAddress( int *n) {
    printf("%u \n" , n);

}