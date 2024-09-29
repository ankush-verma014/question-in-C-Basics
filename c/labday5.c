// #include<stdio.h>
// int main () {

//     float principalamount, interestrate, time, simpleintreste;

//     printf("Enter a principle amount is :");
//     scanf("%f",&principalamount);

//      printf("Enter a interest rate is :");
//     scanf("%f",&interestrate);
//     interestrate= interestrate/100;

//      printf("Enter a time in years is :");
//     scanf("%f",&time);

//     simpleintreste = principalamount*interestrate*time;

//     printf("simple intrest is %.2f\n",simpleintreste); 


// }

// #include <stdio.h>

// int main() {
//     int num;
//     char *result[2] = {"Even", "Odd"};
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     printf("%d is an %s number.\n", num, result[num % 2]);
    
//     return 0;
// }

// #include<stdio.h>
// int main () {
//     int num1, num2;

//     printf("enter a number");
//     scanf("%d %d",&num1,&num2);

//     num1%2==0 && printf("%d is a even number \n",num1) || printf("%d is a odd number",num1); 
//     num2%2==0 && printf("%d is a even number\n",num2) || printf("%d is a odd number",num2); 
   
// }

// #include<stdio.h>
// int main () {
//     float totalbill;
//     int people , amount;

//     printf("Enter a total bill amount\n");
//     scanf("%f", &totalbill);

//     printf("Enter a number of people");
//     scanf("%d", &people);

//     amount = totalbill/people;

//     printf("%d \n amount of each person needs to pay \n",amount);

//     return 0;

// }

// #include<stdio.h>
// int main () {
//     float radius , volume;


//     printf("Welcome to Sphere Volume Calculator!:\n");
//     printf("Enter a radius of sphare:");
//     scanf("%f",&radius);

//     volume= (4.0/3.0)*3.14* radius*radius*radius;

//     printf("volume of sphare is : %.2f",volume);


// }

#include<stdio.h>
int main () {
    int quantity,price; 
    float totalcost;

    printf("Enter the quantity you want to purchase:\n");
    scanf("%d",&quantity);

    printf("%d\n",quantity);


    printf("Enter the price of Chocolate Cake:Rs.\n");
    scanf("%d",&price);

    printf("%d\n",price);

    totalcost = quantity*price;

    printf("total cost :Rs. %f\n",totalcost);

    return 0;

}