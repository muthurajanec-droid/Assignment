/******************************************************************************
QUESTION NUMBER : 14

    Program   : Pangram
    Purpose   : To Check Whether a Sentence is Pangram or Not
    Input     : A Sentence
    Output    : Pangram or Not Pangram
    
*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];             // Declare a character array
    int i,count=0;             // Declare loop variable 
    int alphabet[26] = {0};    // Initialize all 26 alphabet elements to 0
    
    printf("Enter a Sentence :");
    scanf("%99[^\n]",str);
    for(i=0;str[i]!='\0';i++)      // Traverse each character 
    {
        if(str[i]>='A'&&str[i]<='Z')  // Check  the character is uppercase
        {
        {
            alphabet[str[i]-'A']=1;  // Mark the  alphabet as present
        }
         else if(str[i]>='a'&&str[i]<='z') // Check the character is lowercase
        {
        {
            alphabet[str[i]-'a']=1;  // Mark the alphabet as present
        }
    }
    for(i=0;i<26;i++)                 //Loop
    {
        if(alphabet[i]==1)           // Check alphabet is present
        {
            count++;                 // Count Increment
        }
    }
    if(count==26)                   // Check all 26 alphabets are present
    {
        printf( "pangram\n");
    }
    else
    {
        printf("Not pangram\n");
    }
    

    return 0;
}
