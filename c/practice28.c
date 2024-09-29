#include<stdio.h>
void namste();
void bonjour();

int main() {
printf("enter f for french & i for indain");
char ch;
scanf("%c", &ch);

// if (ch =='i') {
//     namste();
// } else {
//     bonjour();
// }
//     return 0;
   bonjour();

}

void namste() {
    printf("namste \n");
   
}
void bonjour() {
    printf("bonjour \n");
    namste();
}