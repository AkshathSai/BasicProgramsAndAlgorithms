#include <stdio.h>

int main () {

    char up, lo;
    //int number;

    printf("Enter any letter in uppercase \n");
    scanf("%s", &up);

    //Add 32 to convert to uppercase
    //number = up + 32;
    lo = up + 32;

    //printf("Letter in lowercase is: %c", number);
    printf("Letter in lowercase is: %c", lo);


    return 0;

}