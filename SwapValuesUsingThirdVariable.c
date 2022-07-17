#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b, c;
    printf("Enter two numbers \n");
    scanf("%d%d", &a,&b);

    printf("Befor swapping value of a = %d b = %d \n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping value of a = %d b = %d", a , b);

    return 0;

}