#include<stdio.h>
int main () {

    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("diffrence = %u \n" , ptr- _ptr);
    _ptr = &age;
    printf("comperession = %u", ptr == _ptr); 
}