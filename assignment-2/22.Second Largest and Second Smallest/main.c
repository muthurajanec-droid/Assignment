/******************************************************************************
QUESTION NUMBER : 22

Program   : Second Largest and Second Smallest
Purpose   : To Find the Second Largest and Second Smallest Elements in an Array
Input     : Array Size and Array Elements
Output    : Second Largest and Second Smallest Elements

*******************************************************************************/
#include <stdio.h>                           

int main()
{
    int arr[100];                               // Declare an array
    int n, i;                                   // Declare variable
    int largest, second_largest;                // Variables for largest values
    int smallest, second_smallest;              // Variables for smallest values
    printf("Enter array size :");               
    scanf("%d", &n);                            // Read array size

    if (n < 2 || n > 100)                       // Check size is valid
    {
        printf("Invalid array size\n");         // Display an error message
        return 0;                               
    }

    printf("Enter array elements :\n");         
    for (i = 0; i < n; i++)                     // Loop 
    {
        scanf("%d", &arr[i]);                   // Store each element
    }

    largest = smallest = arr[0];                // Initialize largest and smallest
    second_largest = second_smallest = 0;       // Initialize second values
    int has_second_largest = 0;                 // Track second largest existence
    int has_second_smallest = 0;                // Track second smallest existence

    for (i = 1; i < n; i++)                   
    {
        if (arr[i] > largest)                   // Check for a new largest value
        {
            second_largest = largest;           
            largest = arr[i];               // Update largest value
            has_second_largest = 1;         // Mark second largest as available
        }
        else if (arr[i] < largest)              
        {
            if (!has_second_largest ||
                arr[i] > second_largest)        
            {
                second_largest = arr[i];        // Update second largest
                has_second_largest = 1;         
            }
        }

        if (arr[i] < smallest)                  // Check for a new smallest value
        {
            second_smallest = smallest;         // Previous smallest becomes second smallest
            smallest = arr[i];                 // Update smallest value
            has_second_smallest = 1;            // Mark second smallest as available
        }
        else if (arr[i] > smallest)             // Check for a distinct second smallest
        {
            if (!has_second_smallest ||
                arr[i] < second_smallest)       // Check whether it is the best candidate
            {
                second_smallest = arr[i];      // Update second smallest
                has_second_smallest = 1;        // Mark it as available
            }
        }
    }

    if (has_second_largest && has_second_smallest) // Check whether both values exist
    {
        printf("Second Largest = %d\n", second_largest);   // Print second largest
        printf("Second Smallest = %d\n", second_smallest); // Print second smallest
    }
    else
    {
        printf("Second largest and/or second smallest do not exist.\n");
                                                        // Display message if unavailable
    }

    return 0;                                  
}