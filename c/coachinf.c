#include<stdio.h>

int main () {

    int a= 1, b;
    b= a++ + a++ + a++;
    printf(" a=%d, b=%d\n",a,b);

    a=1;
    b= ++a + ++a + ++a;
     printf(" a=%d, b=%d\n",a,b);
    return 0;
}