/******************************************************************************
QUESTION NUMBER : 11

    Program   : Convert Integer to String of characters
    Purpose   : To Convert Integer into String 
    Input     : Integer numbers (1234)
    Output    : string Character ('1234')

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i=0,j,num,temp;             // Declare variables
    char str[20];                   // Character array
    printf("Enter integer :");
    scanf("%d",&num);
    temp=num;                       // Copy num into temp
    
    if (temp<0)                     // Check the number is negative
    {
        str[i]='-';                // Store  (-) in the string
        i++;
        temp=-temp;
    }
    if (temp==0)                    // Check the number is zero
    {
        str[i]='0';                 // Store  (0) in the string
        i++;
    }
    
    while(temp>0)
    {
        str[i]= (temp % 10) +'0';    // Seperate the last digit
        temp=temp/10;                // Rwmove the last digit
        i++;
    }
      str[i]='\0';                   //Add the null character 
      
      for(j=0;j<i/2;j++)             // Loop
      {
          char t=str[j];            
          str[i-j-1]=t; 
          str[j]=str[i-j-1];         
      }
      
      printf("%s\n",str);           // Print the converted integer as a string
    

    return 0;
}