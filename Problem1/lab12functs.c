/** lab12functs.c
 * ===========================================================
 * Name: name, date
 * Section: your section
 * Project: assignment information
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab12functs.h"

int numFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}