/******************************************************************************
QUESTION NUMBER : 15

    Program   : Remove Extra Spaces from a String
    Purpose   : To Remove Extra Spaces from a Given String
    Input     : A String
    Output    : String Without Extra Spaces

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[50];                // Declare a character array 
    int i,j=0;                    // Declare  variables
    printf("Enter a string :");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)    // loop
    {
        if(str[i] != ' ' || (i > 0 && str[i-1] != ' ')) // Check the condition for copying characters
        {
            str[j]=str[i];  // Copy the character to position j
            j++;            // Increment
        }
    }
    str[j]='\0';            // Add null character
    printf("%s",str);

    return 0;
}
