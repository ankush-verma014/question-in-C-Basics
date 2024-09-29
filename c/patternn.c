#include <stdio.h>

int main() {
    int n = 5; // You can change this value to print more rows
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
