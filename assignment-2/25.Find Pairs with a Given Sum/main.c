/******************************************************************************
QUESTION NUMBER : 25

    Program         : Find Pairs with a Given Sum
    Purpose         : To Find All Pairs of Array Elements Whose Sum Equals the Target Value
    Input           : Array Elements and Target Sum
    Output          : Pairs Whose Sum Equals the Target Value

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], n, target, i, j, found = 0; // Declare variables and initialize found
    printf("Enter array size: ");
    scanf("%d", &n);                         // Read the size of the array
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)                  // Loop to read array elements
    {
        scanf("%d", &arr[i]);                // Store each element in the array
    }

    printf("Enter target sum: ");
    scanf("%d", &target);                    // Read the target sum

    for(i = 0; i < n; i++)                  // Select the first element of the pair
    {
        for(j = i + 1; j < n; j++)          // Select the next element without repeating
        {
            if(arr[i] + arr[j] == target)   // Check whether the pair sum equals target
            {
                printf("Pair: %d, %d\n", arr[i], arr[j]); // Display the matching pair
                found = 1;                  // Mark that a valid pair was found
            }
        }
    }

    if(found == 0)                          // Check whether any pair was found
    {
        printf("No pairs found\n");         // Display message if no pair exists
    }

    return 0;                              
}
