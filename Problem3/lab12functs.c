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
        return factorial;
    }
    return factorial;
}

int isPrime(int num) {
    int prime = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
            return prime;
        }
    }
    return prime;
}

void floydTriangle(int size) {
    int p, q;
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 0){p = 1; q = 0;}
        else {p = 0; q = 1;}

        for (int j = 1; j <= i; j++){
            if (j % 2 == 0){printf("%d", p);}
            else {printf("%d", q);}
        }
        printf("\n");
    }
}