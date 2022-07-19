#include <stdio.h>

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        printf("arr[%d] = %d \n", i , arr[i]);
    }

}

void reverseArray(int arr[], int start, int end) {

    int temp;
    if(start >= end) {
        return;
    }
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = arr[temp];
    reverseArray(arr, start+1, end-1);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};

    //Getting the size of the Array
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array before reversal \n");
    printArray(arr, n);

    reverseArray(arr, 0, n-1);
    printf("Array After reversal \n");
    printArray(arr, n);

    return 0;

}