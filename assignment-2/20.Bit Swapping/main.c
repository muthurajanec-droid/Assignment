/******************************************************************************
QUESTION NUMBER : 20

         Program   : Bit Swapping
         Purpose   : To Swap n Bits Between Two Integers from a Given Position
         Input     : Two Integers, Starting Position, and Number of Bits
         Output    : Two Integers After Bit Swapping

*******************************************************************************/
#include <stdio.h>                             

int main()
{
    unsigned int num1,num2,pos,n;            // Declare variable
    unsigned int mask,temp,result1,result2;   
    printf("Enter First number :");             
    scanf("%u",&num1);                         // Read the first number
    printf("Enter Second number :");            
    scanf("%u",&num2);                         // Read the second number
    printf("Enter Starting Position :");       
    scanf("%u",&pos);                          // Read the starting position
    printf("Enter number of bits :");           
    scanf("%u",&n);                            // Read the number of bits

    mask = (1u<<n) - 1;                     
    temp = (num1>>pos)&mask;                // Extract n bits from num1 starting at pos

    result1 = (num1& ~(mask << pos)) |       // Clear the selected bits in num1
              (num2& (mask << pos));         // Insert the selected bits from num2 into num1

    result2 = (num2 & ~(mask << pos)) |      // Clear the selected bits in num2
              (temp << pos);                // Insert the extracted bits from num1 into num2

    printf("First number after swap = %u\n", result1);  
    printf("Second number after swap = %u\n", result2); 

    return 0;                                  
}