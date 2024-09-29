#include<stdio.h>

void square(int n);
void _square (int *n);
int main () {
    int number = 8;
    square(number);
    printf("number is = %d \n", number);

    _square(&number);
    printf("number is =%d \n" ,number);

    return 0;
}
// call by value
void square(int n) {
    n = n*n;
    printf("square is = %d \n" , n);
}
void _square (int *n) {
    *n = (*n) * (*n);  // 8 * 8
    printf("number is = %d \n",*n);
}


