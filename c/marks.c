// #include<stdio.h>
// int main() {
//     int marks;
//     printf("enter number : ");
//     scanf("%d", &marks);
//     if (marks < 30) {
//     printf("C \n"); 

//     } else if (marks <= 30 && marks >70) {
//         printf("B \n");
//     } else if (marks < 70 && marks >= 90) {
//         printf("A \n");
//     } else {
//         printf("A+");
//     }
//     return 0;

   


// }


#include<stdio.h>
 main() {
    int marks;
    printf("enter a number (0-100) :");
    scanf("%d",&marks);

    if(marks < 30) {
        printf("C \n");
        
    }  else if (marks >= 30 && marks < 70)
    {
        printf("B \n");
    }
    else if (marks >=70 && marks < 90)
    {
        printf("A \n");
    }
    else 
    {
        printf("A+");
    }
 
    return 0;
}