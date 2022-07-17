#include <stdio.h>

int main() {

    int element, count = 0, sum = 0; 

    printf("Enter the number of elements to store in the Array: \n");
    scanf("%d", &count);

    //Declaring an array of input size given by the user
    int a[count];

    //Reading the input from the user and storing the elements in the array one by one
    printf("Enter the elements: \n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &element);
        a[i] = element;
    }

    //Performing the sum of the elements
    for (int i = 0; i < count; i++)
    {
        sum = sum + a[i];
    }
    
    printf("\nThe sum of the elements in the array is: %d", sum);

    return 0;

}
