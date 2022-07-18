#include <stdio.h>

/**
 * @brief 
 * This Algorithm is used to find the greatest number
 * in an unsorted/unordered Array
 * 
 * @return int 
 */
int main() {

    int size, element;

    printf("Enter the number of elements to store in the Array \n");
    scanf("%d", &size);

    //Initializing the size of the array based of user input
    int arr[size];

    printf("Enter the elements 1 by 1: \n");

    //Taking the user defined elements and storing them in the array
    for(int i = 0; i<size; i ++) {
        scanf("%d", &element);
        arr[i]=element;
    }

    //Logic to Find the maximum number in an Unsorted Array
    int max = arr[0];

    for(int i=0; i<size; i++) {

        if(arr[i]> max) {
            max = arr[i];
        }
    }

    printf("The maximum of the numbers is = %d", max);
}