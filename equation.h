#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}
int multiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("Error: Division by zero is not allowed.");
        // Return 0 or handle as needed
    }
}
