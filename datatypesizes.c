#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{

    //Signed data types

    short short_min = SHRT_MIN;
    short short_max = SHRT_MAX;

    printf("Minimum value of short: %hd \n", short_min);
    printf("Maximum value of short: %hd \n", short_max);
    printf("Printing the size of short: %lu \n", sizeof(short_max));

    printf("\n------------------\n\n");


    int int_min = INT_MIN;
    int int_max = INT_MAX;

    printf("Minimum value of int: %d \n", int_min);
    printf("Maximum value of int: %d \n", int_max);
    printf("Printing the size of int: %lu \n", sizeof(int_max));

    printf("\n------------------\n\n");


    long long_min = LONG_MIN;
    long long_max = LONG_MAX;

    printf("Minimum value of long: %ld \n", long_min);
    printf("Maximum value of long: %ld \n", long_max);
    printf("Printing the size of long: %lu \n", sizeof(long_max));


    //Unsigned data types
    
    unsigned short ushort_max = USHRT_MAX;
    
    printf("Maximum value of unsigned short: %hu \n", ushort_max);
    printf("Printing the size of unsigned short: %lu \n", sizeof(ushort_max));

    printf("\n------------------\n\n");

    unsigned int unint_max = UINT_MAX;

    printf("Maximum value of unsigned int: %hu \n", unint_max);
    printf("Printing the size of unsigned int: %lu \n", sizeof(unint_max));

    printf("\n------------------\n\n");

    unsigned long ulong_max = ULONG_MAX;

    printf("Maximum value of unsigned long: %hu \n", ulong_max);
    printf("Printing the size of unsigned long: %lu \n", sizeof(ulong_max));

    printf("\n------------------\n\n");


    //For float and double we won't have unsigned data types

    float float_max = FLT_MAX;

    printf("Maximum value of float: %hu \n", float_max);
    printf("Printing the size of float: %lu \n", sizeof(float_max));

    printf("\n------------------\n\n");

    double double_max = DBL_MAX;

    printf("Maximum value of double: %hu \n", double_max);
    printf("Printing the size of double: %lu \n", sizeof(double_max));

    printf("\n------------------\n\n");

    signed char_min = SCHAR_MIN;
    signed char_max = SCHAR_MAX;

    printf("Minimum value of signed char: %hu \n", char_min);
    

    printf("\n------------------\n\n");

    return EXIT_SUCCESS;

}