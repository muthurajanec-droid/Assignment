/******************************************************************************
Question number : 18
     
      Program   : Bit Extraction
      Purpose   : To Extract the Specified Number of Bits
      Input     : An Integer, Starting Position, and Number of Bits
      Output    : Extracted Bits

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num,pos,n,result;   // Declare unsigned integer variables
    printf("Enter a Number :");
    scanf("%u",&num);                     //number from the user
    printf("Enter starting position :");
    scanf("%u",&pos);                       //starting bit position
    printf("Enter number of bits :");
    scanf("%u",&n);                         // number of bits to extract

    
    result=(num>>pos)&((1u<<n)-1);
    printf("Extracted bits = %u\n",result);

    return 0;
}