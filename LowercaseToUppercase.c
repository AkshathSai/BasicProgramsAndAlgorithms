#include <stdio.h>

int main() {

    char lowercase, up;
    //int number;

    printf("Enter a Lowercase letter \n");
    scanf("%c", &lowercase);

    //Subtract 32 to convert to lowercase
    //number = lowercase - 32;
    up = lowercase - 32;

    //printf("Letter in Capital : %c", number);
    printf("Letter in Capital : %c", up);


    return 0;

}