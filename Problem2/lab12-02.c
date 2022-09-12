/** lab12-02.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 12 - Problem 2
 * Purpose: Determines if any given number is prime
 * =========================================================== */

#include <stdio.h>
#include "lab12functs.h"

int main() {
    int num;
    printf("Give me an integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}