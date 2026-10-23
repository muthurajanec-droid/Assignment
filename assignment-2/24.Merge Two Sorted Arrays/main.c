/******************************************************************************
QUESTION NUMBER : 24
                   
    Program         : Merge Two Sorted Arrays
    Purpose         : To Merge Two Sorted Arrays into a Single Sorted Array
    Input           : Two Sorted Arrays
    Output          : Merged Sorted Array

*******************************************************************************/


#include <stdio.h> 

int main()
{
    int a[100], b[100], c[200];  // Declare two input arrays 
    int n1, n2, i, j, k;         // Declare variables

    printf("Enter size of first array: ");
    scanf("%d", &n1);            // Read the size of the first array
    printf("Enter first sorted array elements: ");
    for(i = 0; i < n1; i++)     // Loop to read first array elements
    {
        scanf("%d", &a[i]);      // Store elements in the first array
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);            // Read the size of the second array
    printf("Enter second sorted array elements: ");
    for(j = 0; j < n2; j++)     // Loop to read second array elements
    {
        scanf("%d", &b[j]);      // Store elements in the second array
    }

    i = 0;                       // Initialize first array index
    j = 0;                       // Initialize second array index
    k = 0;                       // Initialize merged array index

    while(i < n1 && j < n2)    
    {
        if(a[i] < b[j])         // Compare current elements of both arrays
        {
            c[k] = a[i];        // Copy smaller element from first array
            i++;                // Move to the next element in first array
        }
        else
        {
            c[k] = b[j];        // Copy smaller or equal element from second array
            j++;                // Move to the next element in second array
        }
        k++;                    // Move to the next position in merged array
    }

    while(i < n1)               // Check for remaining elements in first array
    {
        c[k] = a[i];            // Copy remaining element to merged array
        i++;                    // Move to the next element
        k++;                    // Move to the next merged array position
    }

    while(j < n2)               // Check for remaining elements in second array
    {
        c[k] = b[j];            // Copy remaining element to merged array
        j++;                    // Move to the next element
        k++;                    // Move to the next merged array position
    }

    printf("Merged sorted array: ");
    for(i = 0; i < n1 + n2; i++) // Loop through all merged elements
    {
        printf("%d ", c[i]);   
    }

    return 0;                   
}
