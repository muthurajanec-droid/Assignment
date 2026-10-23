/******************************************************************************
QUESTION NUMBER : 23

    Program         : Array Rotation
    Purpose         : To Rotate the Array Elements in a Specified Direction
    Input           : Array Elements, Number of Positions, Direction (Left/Right)
    Output          : Rotated Array Elements

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;
    int pos;
    char direction;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);       // Read array elements
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &pos);              // Number of rotation positions
    printf("Enter direction (L/R): ");
    scanf(" %c", &direction);       // Read L for left, R for right

    pos = pos % n;                  // Handle positions greater than array size

    if(direction == 'L' || direction == 'l')
    {
        for(i = 0; i < pos; i++)    // Repeat left rotation
        {
            temp = arr[0];          // Store first element

            for(j = 0; j < n - 1; j++)
            {
                arr[j] = arr[j + 1]; // Shift elements one position left
            }

            arr[n - 1] = temp;      // Move first element to the end
        }
    }
    else if(direction == 'R' || direction == 'r')
    {
        for(i = 0; i < pos; i++)    // Repeat right rotation
        {
            temp = arr[n - 1];      // Store last element

            for(j = n - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1]; // Shift elements one position right
            }

            arr[0] = temp;          // Move last element to the beginning
        }
    }
    else
    {
        printf("Invalid direction\n");
        return 0;                   // Stop for an invalid direction
    }

    printf("Rotated array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);      // Display rotated array
    }

    return 0;
}
