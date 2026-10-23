/******************************************************************************
QUESTION NUMBER : 12

    Program   : Palindrome 
    Purpose   : To Check Whether a String is Palindrome or Not
    Input     : A String
    Output    : Palindrome or Not a Palindrome

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];                    // Declare Character
    int i,len,flag=1;                 // Declare variables
    printf("Enter a string : ");
    scanf("%50s",str);
    
    len=strlen(str);                  // Find string Length  
    for(i=0;i<len/2;i++)              //loop
    {
        if(str[i]!=str[len-1-i])      //compare characters
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}