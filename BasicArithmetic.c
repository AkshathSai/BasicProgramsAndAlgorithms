#include <stdio.h>

int main() {

    int number1, number2, addition, subtraction, multiplication, division, modulo;

    printf("Enter any two numbers \n");

    scanf("%d%d", &number1 , &number2);

    //Addition
    addition = number1 + number2;

    //Subtraction
    subtraction = number1 - number2;

    //Multiplication
    multiplication = number1 * number2;

    //Division
    division = number1 / number2;

    //Modulo (remainder) 
    modulo = number1 % number2;

    printf("Addition of number1 and number2 : %d \n", addition);
    printf("Subtraction of number1 and number2 : %d \n", subtraction);
    printf("Multiplication of number1 and number2 : %d \n", multiplication);
    printf("Division of number1 and number2 : %d \n", division);
    printf("Modulo of number1 and number2 : %d \n", modulo);

    return 0;    

}