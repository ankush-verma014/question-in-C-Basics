//  #include<stdio.h>
// // area of a square
// int main() 
// {
//     float radius;
//     printf("enter radius");
//     scanf("%f",&radius);

//     printf("area is :%f", 3.14 *radius* radius);

//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a = 2 , b = 3;
//     b = a++ + b--;
//     printf("%d,%d", a,b);


// #include<stdio.h>
// int main(){
//     printf("%d \n", 6<=4 && 7<=5);
// }

// #include<stdio.h>

// int main()
// {
//     int a = 4, b = 3, c;
//     c = a++, --b , ++c;
//     printf("%d,%d,%d",a,b,c);

// }

// #include<stdio.h>
// int main()
// {
//     int a = 3;
//     int b = 6;
//       a = a + b;
//     printf("%d \n",a);
    
// }




// #include<stdio.h>

// int main() {

//     int a;
//     printf ("enter a number:");
//     scanf("%d",a);
//     printf("%d", a % 2 == 0);


// #include<stdio.h>
// int main(){
//     int issunday = 1;
//     int issnowing = 0;
//     printf("%d\n", issunday && issnowing);
// }

// #include<stdio.h>
// int main() {
//     int ismonday = 0;
//     int isranning = 1;
//     printf("%d \n", ismonday || isranning);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int x;
//     printf("enter number");
//     scanf("%d",&x);
//     printf("%d \n",x>9 && x<100);
//     return 0;
// }


// 

// #include<stdio.h>
// int main() {
//     int x = printf("Hello");
//     printf("%f",x);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//    int first = 10;
//    int second = 20;
//    int third = 30;
//    {
//     int third = second - first;
//     printf("%d \n",third);
//    }
//    printf("%d", third);
    
// }




// 

#include<stdio.h>
int main() {
    int age;
    printf("enter age");
    scanf("%d",&age);

    age >= 18 ? printf("adult \n") : printf("not adult \n"); 
    return 0;
    
}