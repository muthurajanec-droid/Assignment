           
/*         QUESTION NUMBER : 2

    Program   : Prime Number
    Purpose   : Check whether a number is prime or not
    Input     : Integer number
    Output    : Prime Number / Not Prime Number
*/


#include <stdio.h>
int prime_number (int i , int n, int count )  // Fuction Declaration
{
for (i = 1 ; i<=n ; i ++ )                   // Check 1 to n
{
  if(n % i == 0 )
 {
     count ++;
  }
}
    return count++;
}

int main()
{
  int n,i;                                    // Variable declaration
  int count = 0;                              // Initialize count to 0
  
  printf("Enter Number : ");
  scanf("%d",&n);                             // Read "n"
  
  count= prime_number ( i , n, count );       // Function Call
 if (count == 2)
 {
     printf ("%d Is Prime Number",n);         // Print Result
 }
  else
  {
      printf ("%d Is Not a Prime Number",n);  // Print Result
  }
 
 return 0;
}
  
  
  
