#include <stdio.h>
#include "isEven.h"
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); // takes int input from console, stores in var num
    isEven(num); //calls function isEven on var num, prints a message to console if the value is even
    // add isOdd(num);
    isOdd(num); //calls function isOdd on var num, prints a message to console if the value is odd
    return 0;
}
