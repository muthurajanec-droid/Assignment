 /*             5 TH QUESTION  
 
         Program   : Perfect Number
         Purpose   : Check whether a number is perfect or not
         Input     : Integer number
         Output    : Perfect Number / Not Perfect Number     */

#include <stdio.h>
int add(int n , int i ,int sum)    // Function Definition

{
    for(i=1;i< n;i++)
    {
        if(n % i == 0)
        {
            sum = sum+i;
        }
    }
    return sum;   
}

int main()
{
    int n,i;                      // Variable Declarartion
    int sum=0;                    // Initialize sum to 0
    
    printf ("Enter Number : ");
    scanf("%d",&n);
    
    sum = add( n ,i, sum);      // Function Call
    
    if (sum == n)
    {
        printf("%d Is perfect Number",n);
    }
    else
    {
        printf("%d Is not a perfect Number",n);
    }

    return 0;
    
}
