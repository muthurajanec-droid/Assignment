/******************************************************************************

QUESTION NUMBER : 10

    Program   : String of digits From Integer Value
    Purpose   : To Convert String of digits in to Integer Value
    Input     : "1234"
    Output    :  1234

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[20];                     // String to Store The Numbers
    int num = 0;
    printf("Enter a Number :");
    scanf("%s",&str);                // Read The Number
    for(int i=0;str[i]!='\0';i++)   //Loop
    {
        num=num*10+(str[i]-'0');     // Convert String Into Interger
    }
    printf("integer value = %d",num);  // Display Output

    return 0;
}