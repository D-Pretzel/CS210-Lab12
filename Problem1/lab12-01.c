/** lab12-01.c
 * ===========================================================
 * Name: name, date
 * Section: your section
 * Project: assignment information
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab12functs.h"

int main() {
    int num;
    scanf("%i", &num);
    if (num != 12){
        printf("Give me an integer: ");
    }

    //Get integer from user
    printf("The factorial of %i is %d.\n", num, numFactorial(num));
    return 0;
}