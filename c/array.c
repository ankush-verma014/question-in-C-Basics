#include<stdio.h>

int main () {
    float price[] = {100.0 , 200.0, 300.0};

    // printf("enter 3 prices :");
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);

    printf("total price 0 : %f" , price[0] + (0.18 * price[0]));
    printf("total price 1 : %f" , price[1] + (0.18 * price[1]));
    printf("total price 3 : %f" , price[2] + (0.18 * price[2]));
}

