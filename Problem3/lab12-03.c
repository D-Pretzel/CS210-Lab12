/** lab12-03.c
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
    printf("Give me an integer: ");
    int num;
    scanf("%d", &num);
    floydTriangle(num);
    return 0;
}