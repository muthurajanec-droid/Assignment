/******************************************************************************
QUESTION NUMBER : 27

    Program         : Addition of Two Complex Numbers
    Purpose         : To Add Two Complex Numbers Using Structures and Functions
    Input           : Real and Imaginary Parts of Two Complex Numbers
    Output          : Sum of Two Complex Numbers

*******************************************************************************/

#include <stdio.h>  

struct Complex                     // Define a structure for complex numbers
{
    float real;                    // Store the real part
    float imaginary;               // Store the imaginary part
};

struct Complex add(struct Complex c1, struct Complex c2) // Function to add two complex numbers
{
    struct Complex result;         // Declare a structure to store the sum

    result.real = c1.real + c2.real;           // Add the real parts
    result.imaginary = c1.imaginary + c2.imaginary; // Add the imaginary parts

    return result;                 // Return the resulting complex number
}

void display(struct Complex c)     // Function to display a complex number
{
    printf("%.2f + %.2fi\n", c.real, c.imaginary); // Print in a + bi format
}

int main()
{
    struct Complex c1, c2, sum;    // Declare two inputs and one result

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary); // Read the first complex number

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary); // Read the second complex number

    sum = add(c1, c2);             // Call the addition function

    printf("Sum of complex numbers: ");
    display(sum);                  // Display the sum

    return 0;                      
}

