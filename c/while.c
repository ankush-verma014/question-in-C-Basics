// #include<stdio.h>
// int main () {
//     int i =1;
//     while (i<=10)
//     {
//         printf("%d \n", i);
//         i++;
//     }

//     return 0;
    
// }

#include<stdio.h>
int main () {

    int n;
    printf("enter number : ");
    scanf("%d", &n);
    // int i=0;
    // while (i<=n)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }

    for (int i=0; i<=n; i++)
    {
        printf("%d \n", i);
    }
}