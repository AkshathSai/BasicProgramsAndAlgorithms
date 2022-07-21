#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Variables in C*/
    int income = 100000;
    int expenses = 60000;

    printf("Initial income: %d \n", income);
    printf("Initial expenses: %d \n", expenses);

    printf("\n------Updating variables-------\n");

    income = 110000;
    expenses = 75000;

    printf("Updated income: %d \n", income);
    printf("Updated expenses: %d \n", expenses);

    printf("\n-----------------------------\n");

    /*Specifying octal and hexadecimals literals*/
    
    //Specifying Octal literal with a leading 0
    long grossIncome = 0220000;
    //Specifying Hexadeimal literal with preceding 0x
    long costOfLiving = 0x64000;

    printf("Gross Income: %ld \n", grossIncome);
    printf("Cost of living: %ld \n", costOfLiving);


    printf("\n---------------------\n");



    return EXIT_SUCCESS;

}