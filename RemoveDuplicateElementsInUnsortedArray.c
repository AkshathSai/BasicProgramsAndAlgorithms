#include <stdio.h>

/**
 * @brief 
 * This Algorithm is used to remove duplicate elements
 * from a sorted/ordered Array
 * 
 * Example:
 * 
 * Input Array = [1 , 1 , 2, 2, 2, 3 , 4, 4]
 * 
 * Output Array = [1, 2, 3, 4]
 * 
 * @return int 
 */

int main() {


    int i, j ,k, key, exists;    

    int duplicateElementsArray[] = {1 , 1 , 2, 2, 2, 3 , 4, 4};

    int noDuplicatesArray[100] = {0};

    //Gives the number of elements in the Array
    int arr_size = sizeof(duplicateElementsArray)/sizeof(int);

    //Logic to remove duplicates
    for(i = 0, j =0; i<arr_size; i++) 
    {

        key = duplicateElementsArray[i];
        exists = 0;

        for(k=0; k<i; k++) {
            if(noDuplicatesArray[k] == key) {
                exists = 1;
            }
        }

        if(!exists) {
            noDuplicatesArray[j] = duplicateElementsArray[i];
            j++;
        }

    }

    printf("The elements in an Array");
    for(i=0; i<arr_size; i++) {
        printf("arr[%d] = %d \n", i, duplicateElementsArray[i]);
    }

}