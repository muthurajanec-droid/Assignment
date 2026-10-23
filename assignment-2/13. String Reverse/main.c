/******************************************************************************
QUESTION NUMBER : 13

    Program   : String Reverse
    Purpose   : To Reverse a Given String
    Input     : A String
    Output    : Reversed String

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],temp;              // Declare string and temporary variable
    int i,j;                       // Declare loop variables
    printf("Enter a String :");
    scanf("%49s",str);
    j=strlen(str)-1;               // find string Length
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];              // Store first character temporarily
        str[i]=str[j];            // Replace first character with last character
        str[j]=temp;              // Replace last character with stored character
        
    }
    printf("Reversed String :%s\n",str);

    return 0;
}