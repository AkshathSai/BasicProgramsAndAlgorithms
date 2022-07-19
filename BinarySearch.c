#include <stdio.h>

/**
 * @brief 
 * This Algorithm is used to find a particular element
 * in a sorted Array
 * 
 * @return int 
 */

int main() {

    int element;
    int size = 5;
    int key;
    int found;

    //Initializing the array with User defined size 
    int arr[size];

    printf("Enter 5 elements 1 by 1 in sorted order: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &element);
        arr[i] = element;
    }

    printf("Enter the element to be found \n");
    scanf("%d", &key);

    int beg=0;
    int mid;
    int end=size-1;

    //Binary search logic
    while (beg<=end)
    {
        mid = (beg + end)/2;
        if(arr[mid] > key) {
            end = mid - 1;
        } else if(arr[mid] < key) {
            beg = mid + 1;
        } else {
            printf("Element found at %d position", mid);
            found = 1;
            break;
        }

    }

    if(found == 0) {
        printf("Element does not exist!");
    }
    

}