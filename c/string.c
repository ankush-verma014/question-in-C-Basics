// #include <stdio.h>

// int main() {
//     char name[] = "ANKUSH VERMA";
//     printf("Name: %s\n", name);
//     return 0;
// }


// #include<stdio.h>

// void printstring(char arr[]);

// int main() {
//     char firstname[] ={"ANKUSH"};
//     char lastname[] = {"VERMA"};
//     printf("%s %s", firstname,lastname);

// }


// #include<stdio.h>
// void printstring(char arr[]);

// int main() {
//      char firstname[] ={"ANKUSH"};
//     //  char lastname[] = {"VERMA"};
    
//     printstring(firstname);
//     // printstring(lastname);
//      return 0;


// }

// void printstring(char arr[]) {
//     for(int i=0; i<4; i++) {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }


// #include<stdio.h>

// int main () {
//     int i ,size;
//     int num[] = {1,4,5,3,8,6,9,7,8,6,5};
//     size= sizeof(num)/ sizeof(num[0]);

//     // printf("%d",size);
//     for ( i = 0; i < size; i++)
//     {
//         printf("%d ",num[i]);
//     }
    
    
// }


// #include<stdio.h>

// void main() {
//     int i, size;

//     char name[] = "Ankush Verma";
//     size= sizeof(name)/ sizeof(name[0]);
//     // printf("%d",size);

//     for ( i = 0; i < size; i++)
//     {
//         printf("%c",name[i] ,size);
//     }


// }

#include<stdio.h>

void main () {
    int i, size;

    char paraline[] = "";
    size = sizeof(paraline) / sizeof(paraline[0]);

    for ( i = 0; i < size; i++)
    {
        printf("%c",paraline[i],size);
    }
    
}