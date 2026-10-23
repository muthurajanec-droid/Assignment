/******************************************************************************
QUESTION NUMBER : 26
    Program         : Rearrange Negative and Positive Numbers
    Purpose         : To Place Negative Numbers Before Positive Numbers While Preserving Their Relative Order
    Input           : Array Size and Array Elements
    Output          : Rearranged Array

*******************************************************************************/

#include <stdio.h> 

int main()
{
    int arr[100], temp[100]; // Declare  arrays
    int n, i, k = 0;         // Declare variables 

    printf("Enter array size: ");
    scanf("%d", &n);         // Read the size of the array

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)  // Loop to read array elements
    {
        scanf("%d", &arr[i]); // Store elements in array
    }

    for(i = 0; i < n; i++)  //  To find negative numbers
    {
        if(arr[i] < 0)       // Check the element is negative
        {
            temp[k] = arr[i]; // Store negative number in temporary array
            k++;              // Move to the next position in temp[]
        }
    }

    for(i = 0; i < n; i++)  
    {
        if(arr[i] >= 0)      // Check the element is positive or zero
        {
            temp[k] = arr[i]; // Store non-negative number after negative numbers
            k++;              // Move to the next position in temp[]
        }
    }

    printf("Rearranged array: ");
    for(i = 0; i < n; i++)  // Loop rearranged array
    {
        printf("%d ", temp[i]); // Display rearranged element
    }

    return 0;              
}

