/******************************************************************************
QUESTION NUMBER : 21

          Program   : Remove Duplicate Elements
          Purpose   : To Remove Duplicate Elements from an Array
          Input     : Array Size and Array Elements
          Output    : Array Containing Only Unique Elements
          
*******************************************************************************/
#include <stdio.h>                         

int main()
{
    int arr[100];                           // Declare an array to store elements
    int n, i, j, k;                         // Declare variables
    printf("Enter array size :");           
    scanf("%d", &n);                        // Read the array size
    printf("Enter array elements :\n");    
    for(i = 0; i < n; i++)                  // Loop 
    {
        scanf("%d", &arr[i]);               // Store each element in the array
    }

    for(i = 0; i < n; i++)                  //Loop
    {
        for(j = i + 1; j < n; j++)          // Compare with the following elements
        {
            if(arr[i] == arr[j])            // Check duplicate elements
            {
                for(k = j; k < n - 1; k++)  // Shift elements to remove duplicate
                {
                    arr[k] = arr[k + 1];   // Move  next element one position left
                }

                n--;                       
                j--;                        
            }
        }
    }

    printf("Array after removing duplicates :\n");

    for(i = 0; i < n; i++)                              // Loop
    {
        printf("%d ", arr[i]);             
    }

    return 0;                              
}