#include <stdio.h>

int main() {

    float celsius, farenheit;

    printf("Enter Tempature in Farenheit. \n");
    scanf("%f", &farenheit);

    //Converting farenheit to Celsius
    celsius = (farenheit - 32) * 5/9 ;

    printf("Tempature in Celsius is: %f", celsius);

    return 0;

}