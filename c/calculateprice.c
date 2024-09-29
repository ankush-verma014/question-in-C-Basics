#include<stdio.h>

void calculateprice(float value);

int main() {
    float value = 123;
calculateprice(value);
printf(" value is : %f \n",value);
    return 0;
}

void calculateprice(float value) {
value = value + (0.18 * value);
printf("final value is : %f \n",value);
}