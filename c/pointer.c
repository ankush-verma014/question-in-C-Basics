// #include<stdio.h>
// int main () {
//     int age = 22;
//     int *ptr =&age;
//     //  adress
//     // printf("%p \n" ,&age);
//     printf("%u \n" ,ptr);
//     printf("%u \n",&ptr);
//     return 0;
// }

#include<stdio.h>
int main () {
    int age = 22;
    int *ptr = &age;
//    value
    printf("%d \n",age);
     printf("%d \n",*ptr);
    //   printf("%d \n",*(&age));

}