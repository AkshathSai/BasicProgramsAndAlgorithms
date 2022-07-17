#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float num_1 = 100.245;
    double num_2 = 100.245;
    int res;

    //This is how we check equality for floating point variables
    res = fabs(num_1 - num_2) < 1e-4;

    printf("num1: %f \n\n", num_1);
    printf("num2: %f \n\n", num_2);

    //If res is 1 it means true, 0 is false
    printf("num_1 equals to num_2?: %d \n\n", res);

    return EXIT_SUCCESS;

}