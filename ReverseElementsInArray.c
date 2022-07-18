#include <stdio.h>

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        printf("a[%d] = %d \n", i, arr[i]);
    }

}


int main() {

    int i, j, temp;
    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Array before reversal \n");
    printArray(arr, size);
    
    //Logic to reverse the array
    for(i=0, j=size-1; i<j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed Array is: \n");

    printArray(arr, size);

}