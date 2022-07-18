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

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};

    int i;
    int j = 1;

    /*sizeof to determine its size in bytes 
    and use the division to calculate the number of elements*/
    //int arr_size = sizeof(arr)/arr[0];
    //printf("Number of elements in the array = %d", arr_size);

    for (i = 1; i < 8; ++i)
    {   
        if(arr[i] != arr[i-1]) {
            arr[j] = arr[i];
            j += 1;
        }
    }

    for (i = 0; i < j; ++i)
    {
        printf("arr[%d] = %d \n", i ,arr[i]);
    }

    return 0;    
    
}