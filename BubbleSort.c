#include <stdio.h>

/**
 * @brief 
 *
 * This Sorting Algorithm is used to 
 * sort the elements in an Array in
 * Ascending order
 * 
 * @return int 
 */

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        printf("arr[%d] = %d \n", i , arr[i]);
    }

}

int main() {

    int n, element, temp;

    //int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number of elements \n");
    scanf("%d", &n);

    int arr[n];    
    //int arr[] = {88, 55, 44, 33, 22, 11};
    printf("Enter the Elements \n");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &element);
        arr[x] = element;  
    }

    printf("Array before sorting \n");
    printArray(arr, n);

    //Logic for bubble sort
    for(int i=0; i<n-1; i++) {
        
        for (int j = 0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    printf("Array after sorting \n");
    printArray(arr, n);

}