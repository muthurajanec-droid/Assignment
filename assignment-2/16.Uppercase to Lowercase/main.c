/******************************************************************************
QUESTION NUMBER : 16
   
    Program   : Uppercase to Lowercase
    Purpose   : To Convert Uppercase Letters into Lowercase
    Input     : A String
    Output    : String in Lowercase Letters

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[50];                  // Declare a character array 
    int i;                         // Declare a variable
    printf("Enter a string :");   
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A'&&str[i]<='Z')      // Check the character is uppercase
        {
            str[i]=str[i]+32;              // Convert uppercase to lowercase
        }
    }
    
    printf("%s",str);

    return 0;
}