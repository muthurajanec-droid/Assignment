/******************************************************************************

QUESTION NUMBER : 4

    Program   : Fibonacci Series
    Purpose   : To Print Fibonacci Series
    Input     : Number of terms
    Output    : Fibonacci Series

*******************************************************************************/
#include <stdio.h>

int main()
{
int n,i,a=0,b=1,c;         // Declare Variables
printf("Enter Number : ");
scanf("%d",&n);
for(i=0;i<n;i++)           //Loop
{
    printf("%d",a);
    c=a+b;                 // Adding a And b 
    a=b;                  // store b value into a
    b=c;                  // Store c value into b
} 

    return 0;
}