/******************************************************************************
QUESTION NUMBER : 3

    Program   : Factorial
    Purpose   : To Find the Factorial of a Given Number
    Input     : An Integer
    Output    : Factorial of the Given Number

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num;                     // Declare variable
    int factorial=1;               // Initialize factorial
    
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0)                      // Check  the number is negative
    {
        printf("zero is invalid");
    }
    else
    {
        for(i=1;i<=num;i++)         // Loop
        factorial = factorial*i;    // multiply & store in factorial
       
        
        printf("factorial of %d = %d",num,factorial);
    }

    return 0;
}
