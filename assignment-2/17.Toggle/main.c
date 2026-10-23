/******************************************************************************

Program   : Bit Toggle
Purpose   : To Toggle the Specified Number of Bits
Input     : An Integer, Bit Position, and Number of Bits to Toggle
Output    : Integer After Toggling the Specified Bits

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,position,n;                  // Declare variables
    printf("Enter number :");
    scanf("%d",&num);
    printf("Enter a position of number :");
    scanf("%d",&position);
    printf("Enter Number of bit toggle :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)                    //Loop
    {
        num^=(1<<(position+i));            // Toggle each bit using XOR
    }
    
    printf("Result After Toggle %d",num);

    return 0;
}
