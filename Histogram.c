#include <stdio.h>

/**
 * @brief 
 * This Algorithm is used to find the number
 * of occurences of a particular element in an Array
 * 
 * @return int 
 */

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        printf("a[%d] = %d \n", i, arr[i]);
    }

}

int main() {

    int size, count, element, key;

    printf("Enter the number of elements to store in the Array \n");
    scanf("%d", &size);

    //Initializing the array with User defined size 
    int arr[size];

    printf("Please enter the elements 1 by 1: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &element);
        arr[i] = element;
    }
    
    printf("Enter the element to be found with the number of occurences \n");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("%d occurs  %d times \n", key ,count);

    printArray(arr, size);
}