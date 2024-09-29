#include <stdio.h>

int main() {
    char signal;
    printf("Enter the traffic light signal (R/Y/G): ");
    scanf(" %c", &signal);

    switch(signal) {
        case 'R':
            printf("Stop! It's red signal.\n");
            break;
        case 'Y':
            printf("Get ready to move. It's yellow signal.\n");
            break;
        case 'G':
            printf("Go! It's green signal.\n");
            break;
        default:
            printf("Invalid signal input.\n");
            break;
    }

    return 0;
}
