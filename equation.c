#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "equation.h"
void decimalToFraction(double decimal);
float delta(int a, int b, int c);
int gcd(int a /*5*/, int b /*10*/);
void solutionCount(int a, int b, int c);

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

// Function prototypes for the operations and equation solving

// end Function prototypes for the operations and equation solving
float delta(int a, int b, int c)

{
    return b * b - 4 * a * c;
}

int gcd(int a /*333*/, int b /*10*/)
{
    if (b == 0)
        return abs(a);
    return gcd(b, a % b);
}

void decimalToFraction(double decimal)
{
    int denominator = 1;
    while (decimal - (int)decimal > 0)
    {

        decimal *= 10;
        denominator *= 10;
    }

    int numerator = (int)decimal;
    int commonDivisor = gcd(numerator, denominator);
    if (commonDivisor == 1)
    {
        printf("%f", decimal / denominator);
    }
    else
    {

        numerator /= commonDivisor;

        denominator /= commonDivisor;

        if (numerator == 0)
        {
            printf(" 0\n");
        }
        else if (numerator == abs(denominator))
        {
            printf(" 1\n");
        }
        else if (numerator == -abs(denominator))
        {
            printf(" -1\n");
        }
        else

        {
            printf("%d/%d\n", numerator, denominator);
        }
    }
}
void solutionCount(int a, int b, int c)
{
    float d = delta(a, b, c);
    if (d < 0)
        printf("no solutions in the set of real numbers\n");
    else
    {
        float X1 = (-b + sqrt(d)) / (2 * a);
        float X2 = (-b - sqrt(d)) / (2 * a);
        if (X1 == X2)
        {
            printf("the solution is X = ");
            decimalToFraction(X1);
        }
        else
        {
            printf("the solutions are X1 =");
            decimalToFraction(X1);
            printf(" and X2 = ");
            decimalToFraction(X2);
        }
    }
}
int equation()
{
    int a, b, c;
    printf("Enter coefficients x² :");
    scanf("%d", &a);
    system("cls");
    printf("Enter coefficients x :");
    scanf("%d", &b);
    system("cls");
    printf("Enter the last coefficient :");
    scanf("%d", &c);
    system("cls");
    solutionCount(a, b, c);

    return 0;
}
