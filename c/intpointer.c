#include<stdio.h>
int main () {

    int age = 22;
    int *ptr = &age;
    printf("ptr = %u", ptr);
    ptr++;
    printf("ptr = %u", ptr);

    return 0;

}