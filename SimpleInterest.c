#include <stdio.h>

int main() {

    float principalAmount, rate, time, simpleinterest;

    printf("Enter PrincipalAmount, Rate & Time Respectively \n");
    scanf("%f%f%f", &principalAmount, &rate, &time);
    
    //Calculating SimpleInterest PTR/100
    simpleinterest = (principalAmount * time * rate)/100;
    
    printf("SimpleInterest is : %f", simpleinterest);

    return 0;

}