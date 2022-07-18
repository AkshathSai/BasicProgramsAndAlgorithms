#include <stdio.h>

int main() {

    int min, size, element;

    printf("Enter the number of elements to store in the Array \n");
    scanf("%d", &size);

    //Initializing the array with User defined size 
    int a[size];

    printf("Please enter the elements 1 by 1: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &element);
        a[i] = element;
    }

    min = a[0];
    //Logic to find the minimum number
    for (int i = 1; i < size; i++)
    {
        if(a[i] < min) {
            min = a[i];
        }
    }
    
    printf("The minimum of the given numbers is = %d", min);
    
}