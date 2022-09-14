/** lab12functs.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 12 - Problem 2
 * Purpose: Determines if any given number is prime
 * =========================================================== */

#include "lab12functs.h"

int numFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int isPrime(int num) {
    int prime;
    for (int i = 2; i < num; i++) { //We have to start i at 2 because 1 is a factor of every number
        if (num % i == 0) {
            prime = 0;  // not prime
        } else {
            prime = 1;  // prime
        }
    }
    return prime;
}