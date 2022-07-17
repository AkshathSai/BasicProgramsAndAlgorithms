#include <stdio.h>

int main() {

    float radiaus, area, circumference;

    printf("Enter the circle's radius to calculate its area and circumference.\n");
    scanf("%f", &radiaus);
    
    //Formula to calculate area of a circle
    area = 3.14 * radiaus * radiaus;

    //Formula to calculate circumference of the circle
    circumference = 2 * 3.14 * radiaus;

    printf("Area of the circle is: %f \n", area);
    printf("Circumference of the circle is: %f", circumference);

    return 0;

}