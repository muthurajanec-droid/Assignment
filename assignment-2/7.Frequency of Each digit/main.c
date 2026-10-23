/******************************************************************************
 QUESTION NUMBER : 7

    Program   : Frequency Of Each Digit
    Purpose   : To Count How many times of Each Numbers (0-9)
    Input     : Integer numbers (1223344)
    Output    : Gives Frequency of Each Digit

*******************************************************************************/
#include <stdio.h>
void count_frequency(int num)
{
    int freq[10]= {0};
    int digit;

while (num>0)
{
    digit=num%10;            // Get the last digit 
    freq[digit]++;           // Increment 
    num=num/10;              // Remove the Last Digit
}
printf("Digit Frequency\n");
for (int i=0;i<10;i++)
{
    printf("%d=%d\n",i,freq[i]);
}
}

int main()
{
    int num;                       // Declare a variable
    printf("Enter Numbers");
    scanf("%d",&num);              // Read the number
    count_frequency(num);          // Call the function

    return 0;
}
