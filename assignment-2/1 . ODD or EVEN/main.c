/******************************************************************************

    1. ODD or EVEN PROGRAM

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;                            // Variable declaration
    printf("Enter Integer : ");        // Disply the Statement
    scanf("%d",&num);                 // Get input from user
    if(num%2==0)                     // Div by 2
    {
        
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}