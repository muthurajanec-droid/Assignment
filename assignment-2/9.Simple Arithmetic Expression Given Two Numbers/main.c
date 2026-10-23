/******************************************************************************

QUESTION NUMBER : 9

    Program   : Simple Arithmetic Expression Given Two Numbers
    Purpose   : Arithmetic Operations on Two Decimal Numbers
    Input     : Two Decimal Numbers and One Operator
    Output    : Result of the Arithmetic Operation

*******************************************************************************/
#include <stdio.h>
int float_calculate(float a , float b, char op)
{
switch (op)
{
case '+':
 return a+b;      // Return addition result
case '-':
 return(a-b);     // Return Subraction result
case '*':
 return(a*b);     // Return Multiplication result
case '/':
 if (b==0)       // Check denominator is zero
 {
     printf("Invalid Input\n");     // Display  invalid input
    }
     return 0;
 }
 else
 {
     return(a/b);  // Return division result
 }
 default:
 {
     printf("Invalid Operator");  // Display invalid operator
    }
 }
    
}
}

int main()
{
    float a,b,result;      // Declare two numbers and result variable
    
    char op;               //Declare variable to store operator
    
    printf("Enter 1st Decimal Number :");  
    scanf("%f",&a);                        //Get first decimal number
    printf("Enter Operator :");            
    scanf(" %c",&op);                      //Get Operator
    printf("Enter 2nd Decimal Number :"); 
    scanf("%f",&b);                       //Get Second decimal number
   
    result=float_calculate(a,b,op);      //function call and store result
    printf("Result :%.1f",result);

    return 0;
}
