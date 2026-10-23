/******************************************************************************

 QUESTION NUMBER : 6

    Program   : Greatest Common Divisor 
    Purpose   : To Find GCD Of Two Numbers
    Input     : Two Integer numbers
    Output    : GCD of Two Numbers

*******************************************************************************/
#include <stdio.h>
int Gcd(int a , int b)
{
    if(a==0)
    {
        return b;                   //a is 0, b is the GCD
    }
    if(b==0)
    {
        return a;                  //b is 0, a is the GCD
    }
    if(a==b)
    {
        return b;                  //both numbers are equal, that number is the GCD
    }
    if(a>b)
    {
        return Gcd(a-b,b);        // Subtract b from a and find GCD recursively
    }
    else
    {
        return Gcd(a,b-a);        // Subtract a from b and find GCD recursively
    }
    
}

int main()
{
    int a,b;                    // Declare two integer variables
    printf("Enter a : ");
    scanf("%d",&a);            // Get First number from user
    printf("Enter b : ");
    scanf("%d",&b);            // Get Second number from user
    
    printf("GCD of %d and %d is %d",a,b,Gcd(a,b)); // Call Gcd function and display the result

    return 0;
}
