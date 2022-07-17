#include <stdio.h>

int main() {

    int maths, english, computing, c_language, finance;
    float total, average, percentage;

    printf("Enter the marks of 5 subjects Maths, English, Computing, C - language & Financial accouting Respectively \n");
    scanf("%d%d%d%d%d", &maths, &english, &computing, &c_language, &finance);

    total = maths + english + computing + c_language + finance;
    average = (maths + english + computing + c_language + finance)/ 5;
    percentage = (total/500)*100;

    printf("Total marks : %f \n", total);
    printf("Average is : %f \n", average);
    printf("Percentage : %f \n", percentage);

    return 0;

}