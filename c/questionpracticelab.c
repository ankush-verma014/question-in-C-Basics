// #include<stdio.h>

// int main () {

//     int a=37;
//     a=a/10;

//     printf("%d",a*10);
// }

// #include<stdio.h>
// int main () {

//     int a= 89;
//     a=a%10;

//     printf("%d",a*10);
// }

// #include<stdio.h>
// int main () {

//     int a=69, n;
//     n=a%10;
//     a=a/10;

//    n>=5 && printf("%d",(a+1)*10) ||  n<5 && printf("%d",a*10);

//    return 0;
// }

// #include<stdio.h>
// int main () {

//     int n = 125;
    

//     n%2==0 && printf("even number") || n%2 != 0 && printf("odd number");
// }


// #include<stdio.h>
// int main () {

//     int n, a, sum;

//     printf("Enter a three digit number");
//     scanf("%d",&n);

//     a=n%10;
//     sum = a;
//     n=n/10;
//     a=n/10;
//     sum=sum+a;
//     printf("%d ",sum);

// }


// #include<stdio.h>
// int main(){
//     int seconds = 0;
//     int minutes = 0;
//     int hours = 0;

//     printf("Enter the seconds: ");
//     scanf("%d", &seconds);

//     hours = seconds / 3600;

//     minutes = (seconds - 3600) / 60;

//     seconds = (seconds - 3600 - 60);

//     printf("%d hours\n %d minutes\n %d seconds", hours, minutes, seconds);
// }

// #include <stdio.h>

// int main() {
//     int n, first, middle, last, sum;

//     printf("Enter a three-digit number: ");
//     scanf("%d", &n);

//     last = n % 10;       // Extract the last digit
//     n = n / 10;
//     middle = n % 10;     // Extract the middle digit
//     first = n / 10;      // Extract the first digit

//     sum = last + middle;  // Sum of the first and last digits
//     printf("Sum of the first and middle digits: %d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char lower, upper;

//     printf("Enter a lower character: ");
//     scanf("%c", &lower);
//    upper= lower + 32;

//     printf("Uppercase character: %c\n", upper);

//     return 0;
// }


  // #include<stdio.h>
  // int main () {
  //   int a,b,c;

  //   printf("Enter three number:");
  //   scanf("%d\n %d\n %d",&a,&b,&c);

  //   a>b && a>c && printf("biggest number is %d\n",a) || b>=a && b>=c && printf("biggest number is %d\n",b) || c>=a && c>=b && printf("biggest number is %d",c);
     
  // }
    //   (a >= b && a >= c && printf("The biggest number is %d\n", a)) ||
    // (b >= a && b >= c && printf("The biggest number is %d\n", b)) ||
    // (c >= a && c >= b && printf("The biggest number is %d\n", c));
  // }


  // #include<stdio.h>
  // int main () {

  //   float Fahrenheit, Celsius;

  //   printf(" Enter the temprature in celsius:");
  //   scanf("%f",&Celsius);

  //   Fahrenheit= (Celsius*9/5) + 32;

  //   printf("tem in fahrenhit:%f",Fahrenheit);
  // }

  // #include<stdio.h>
  // int main () {

  //   float Fahrenheit, Celsius;

  //   printf(" Enter the temprature in fahrenheit:");
  //   scanf("%f",&Fahrenheit);

  //   Celsius= (Fahrenheit - 32) * (5.0 / 9.0);
    
  //   printf("tem in fahrenheit:%f\n tem in celsius: %f",Fahrenheit,Celsius);
  // }

  
// #include <stdio.h>

// int main() {
//     char lower, upper;

//     printf("Enter a lowercase character: ");
//     scanf("%c\n", &lower);

//      printf("Enter a uppercase character: ");
//      scanf("%c\n",&upper);

//    upper= lower - 32;
//    lower= upper +  32;




//     (printf("Uppercase character: %c\n", upper)&&
//     printf("lowercse character:%c", lower));

//     return 0;
// }


// #include<stdio.h>

// int main () {

//   int n, sum;

//   printf("Enter a positive integer :");
//   scanf("%d",&n);

//   sum = n*(n+1)/2;

//   printf("value of sum is:%d",sum);


// }


// #include<stdio.h>
// int main () {

//   int centimeter;
//   float inches;

//   printf("enter a number :");
//   scanf("%d",&centimeter);

//   inches = centimeter * 0.3937;

//   printf("inches is : %f",inches);
// }


  //  #include<stdio.h>
  //  int main () {

  //   char a, b;
    

  //   printf("Enter a two char :");
  //   scanf("%c\n %c",&a,&b);
  //   printf("ASCII value a:%d\n",a);
  //   printf("ASCII value b:%d\n",b);
  //   printf("ASCII value sum :%d",a+b);

  //  }

//   #include<stdio.h>
// int main(){
//     float radius = 0;
//     int side = 0;
//     float circle = 0;
//     int square = 0;

//     scanf("%f", &radius);
//     scanf("%d", &side);

//     circle = 3.14 * radius * radius;
//     square = side * side;

//     printf("Area of Circle is: %.2f\n", circle);
//     printf("Area of Square is: %d", square);

//     return 0;
// }


// #include<stdio.h>
// int main () {

//   int years, weeks, months, days, remeningdays;

//   printf("Enter a number of days :");
//   scanf("%d",&days);


//   years = days/365;
//   remeningdays = days%365;
//   weeks = remeningdays/7;
//   remeningdays=remeningdays%7;
//   months = remeningdays/30;
//   remeningdays = remeningdays % 30;
//   remeningdays = remeningdays;

//   printf("years : %d\n months: %d\n weeks:%d\n days:%d\n",years,months,weeks,remeningdays); 
// }


// #include<stdio.h>
// int main () {
//   int tdays , years, months, weeks , days;

//   printf("Entar number of days :");
//   scanf("%d",&tdays);

//   years= tdays/365;
//   months= tdays%365/30;
//   weeks = tdays%365%30/7;
//   days = tdays%365%30%7;

//   printf("years %d months %d weeks %d days %d",years,months,weeks,days);

// }

// #include <stdio.h>

// int main(){
//     int a = 10.2,b = 25.3,c = 5.4;
//     a+=b*=c/=2.2;
//     printf("a=%d,b=%d,c=%d",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int main () {
//   int n, a;

//   printf("Enter a two digit number :");
//   scanf("%d",&n);

//   a=n%10;
//   n=n/10;

//   a>=5 && printf("next multiple is : %d ",(n+1)*10) ||
//   a<=5 && printf("previous multiple is : %d",(n*10));
// }

// #include<stdio.h>
// int main(){
//     int tea = 0;
//     int coffee = 0;
//     int biscuits = 0;
//     int cost = 0;

//      printf("Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings, and we are eager to serve you! Let's calculate your bill based on your preferences.\n\n");

//      printf("Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10\n\n");

//     printf("How many cups of tea would you like to order ? : \n");
//     scanf("%d", &tea);

//     printf("How many cups of coffee would you like to order ? : \n");
//     scanf("%d", &coffee);

//     printf("How many biscuits would you like to order ? : \n\n");
//     scanf("%d", &biscuits);

//     cost = (tea * 15) + (coffee * 25) + (biscuits * 10);

//     printf("%d cups of tea\n", tea);
//     printf("%d cups of coffee\n", coffee);
//     printf("%d buscuits\n", biscuits);
//     printf("Total Bill Amount: ₹%d\n\n", cost);
//    printf("Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.");


// }

// #include<stdio.h>
// int main () {

//   int  sellingprice ,costprice ,Profit, loss ,profitpercentage, losspercentage;

//   printf("Enter a selling price (sp)");
//   scanf("%d",&sellingprice);

//   printf("Enter a cost price (cp)");
//   scanf("%d",&costprice);

// Profit = sellingprice - costprice;

// loss = costprice - sellingprice;

// profitpercentage = Profit * 100 / costprice;

// losspercentage  = loss * 100 / costprice;

// printf("selling price: %d\n",sellingprice);
// printf("cost price: %d\n",costprice);
// printf("profit: %d\n",Profit);
// printf("loss : %d\n",loss);
// printf("profit percentage:%d\n",profitpercentage);
// printf("loss percentage :%d",losspercentage);

// return 0;


// }


// #include<stdio.h>
// int main () {

//   int costprice, repaircost, coloringcost,accessoriescost,desiredprofit , totalcost;


//   printf("The initial cost of the cycle =");
//   scanf("%d",&costprice);
//   printf(" The cost of repairs =");
//   scanf("%d",&repaircost);
//   printf(" The cost of coloring =");
//   scanf("%d",&coloringcost);
//   printf(" The cost of new accessories  =");
//   scanf("%d",&accessoriescost);
//    printf(" The desired profit =");
//   scanf("%d",&desiredprofit);

//   int sellingprice = costprice+repaircost+ coloringcost+accessoriescost+desiredprofit;

//   totalcost= sellingprice-desiredprofit;

//   printf("cost price:Rs.%d\n",costprice);
//   printf("repair cost:Rs. %d\n",repaircost);
//   printf("coloring cost:Rs. %d\n",coloringcost);
//   printf("new accessories cost :Rs.%d\n",accessoriescost);
//   printf("desired profit:Rs.%d\n",desiredprofit);
//   printf("selling price:Rs.%d\n",sellingprice);
//   printf("total cost:Rs. %d\n",totalcost);

// }

// #include<stdio.h>
// int main () {

//   float radius, height, surfacearea;

//   printf("Enter the radius of the cylinder:");
//   scanf("%f",&radius);

//   printf("Enter the height of the cylinder :");
//   scanf("%f",&height);

//   surfacearea = 2 * 3.14159 * radius*radius  + 2 * 3.14159 * radius * height;

//  printf("Radius: %.2f\n", radius);
//  printf("Height: %.2f\n", height);
//  printf("Surface Area: %.2f\n", surfacearea);

//     return 0;
// }

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

// #include<stdio.h>
// int main () {
//     int quantity,price; 
//     float totalcost;

//     printf("Enter the quantity you want to purchase:\n");
//     scanf("%d",&quantity);

//     printf("%d\n",quantity);


//     printf("Enter the price of Chocolate Cake:Rs.\n");
//     scanf("%d",&price);

//     printf("%d\n",price);

//     totalcost = quantity*price;

//     printf("total cost :Rs. %f\n",totalcost);

//     return 0;

// }

// #include<stdio.h>

// int main() {
//     int a, b;

//     printf("Enetr a number:\n");
//     scanf("%d %d",&a, &b);

    
//     printf("a & b= %d\n",a & b);
//     printf("a | b=%d\n",a | b);
//     printf("a ^ b=%d\n",a ^ b);
//     printf("~a = %lu\n",~a);
//     printf("a <<1 = %d\n",a<<1);
//     printf(" a >> 1 =%d\n",a>>1);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num1, num2;
//     char operator;

    
//     printf("Enter 1st number: ");
//     scanf("%d", &num1);
//     printf("Enter 2nd number: ");
//     scanf("%d", &num2);
//     printf("Enter operator (+,-,*,/): ");
//     scanf(" %c", &operator);

    
//     switch (operator) {
//         case '+':
//             printf("addition = %d\n", num1 + num2);
//             break;
//         case '-':
//             printf("subtraction = %d\n", num1 - num2);
//             break;
//         case '*':
//             printf("multiplication = %d\n", num1 * num2);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 printf("division = %d\n", num1 / num2);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Error: Invalid operator.\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num1, num2;
//     char operator;

//     printf("Enter 1st number: ");
//     scanf("%d", &num1);
//     printf("Enter 2nd number: ");
//     scanf("%d", &num2);
//     printf("Enter operator (+,-,*,/): ");
//     scanf(" %c", &operator);

    
//     int addition = (operator == '+') && printf("addition = %d\n", num1 + num2);
//     int subtraction = (operator == '-') && printf("subtraction = %d\n", num1 - num2);
//     int multiplication = (operator == '*') && printf("multiplication = %d\n", num1 * num2);
//     int division = (operator == '/') && (num2 != 0) && printf("division = %d\n", num1 / num2);
//     int division_error = (operator == '/') && (num2 == 0) && printf("Error: Division by zero is not allowed.\n");
//     int invalid_operator = !(operator == '+' || operator == '-' || operator == '*' || operator == '/') && printf("Error: Invalid operator.\n");

//     return 0;
// }


// #include<stdio.h>
// int main () {
//     int x , y;

//     printf("Enter a two number x,y :\n");
//     scanf("%d %d",&x,&y);

//     printf("x==y = %d\n",x==y);
//     printf("x!=y = %d\n",x!=y);
//     printf("x>y = %d\n",x>y);
//     printf("x<y = %d\n",x<y);
//     printf("x>=y = %d\n",x>=y);
//     printf("x=<y = %d\n",x<=y);
    
//     return 0;
// }

// #include<stdio.h>
// int main () {

//     int a, b;

//     printf("Enter a two number a and b :\n");
//     scanf("%d %d ",&a,&b);

//     printf("a+= :%d\n",a+=b);
//     printf("a-= :%d\n",a-=b);
//     printf("a*= :%d\n",a*=b);
//     printf("a/= :%d\n",a/=b);
//     printf("a%= :%d\n",a%=b);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char name[30];    
//     char department[50];
//     int empId;
//     float salary;

//     printf("Enter employee name: ");
//     scanf("%s", name);  

//     printf("Enter employee ID: ");
//     scanf("%d", &empId);

//     printf("Enter employee designation: ");
//     scanf("%s", department); 
//     printf("Enter employee salary: ");
//     scanf("%f", &salary);

//     printf("Employee Details\n");
//     printf("Name: %s\n", name);
//     printf("Employee ID: %d\n", empId);
//     printf("Designation: %s\n", department);
//     printf("Salary: $%.2f\n", salary);

//     return 0;
// }




// #include <stdio.h>
// int main(){
//     int i = 3;
//     int j;
//     j = sizeof(++i + ++i);
//     printf("i=%d j=%d", i, j);
    
//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>

// int main(){
//     int a=10, b;
//     b= a++ + ++a;

//     printf("%d %d %d %d",b,a++,a,++a);
    
//     return 0;
// }

// #include<stdio.h>
// int main () {

//   int a=10,b=11,c=13,d;
//   d = (a=c, b+=a, c=a+b+c);
//   printf("%d %d",a,b);
// }

// two digit number 

// #include<stdio.h>
// int main () {

//   int n;

//   printf("Enter a two digit number: ");
//   scanf("%d",&n);

//   n>=10 && n<=99 && printf("It is a two-digit number :") || printf("it is a Invalid number");
 
// }

// #include<stdio.h>

// int main () {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     (n >= 10 && n <= 99 && printf("It is a two-digit number\n")) ||
//     (n >= 0 && n <= 9 && printf("It is a one-digit number\n")) ||
//     (n >= 100 && n <= 999 && printf("It is a three-digit number\n")) ||
//     printf("It is an invalid number\n");

//     return 0;
// }

#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c); // Added a space before %c to handle any leftover newline characters

    printf("The ASCII value of %c is %d\n", c, c);

    return 0;
}




