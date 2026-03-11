#include <stdio.h>
#include <stdlib.h>
#include "equation.h"
#include <unistd.h>

int main()
{
    int oper, num1, num2, i = 0;
    while (i == 0)
    {

        do // Loop to ensure valid operation selection
        {
            printf("________________Welcome to the CLI Calculator!___________hh_____\n");
            printf("Select an operation to perform:\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Solve a quadratic equation\n");
            printf("6. Exit\n");
            scanf("%d", &oper);
            // sleep(1);
            system("cls");
            if (oper < 1 || oper > 6)
            {
                printf("Invalid operation. Please select a number between 1 and 6.\n");
            }
        } while (oper < 1 || oper > 6);

        if (oper == 6)
        {
            printf("Exiting the calculator. Goodbye!\n");
            return 0;
        }

        switch (oper)
        {
        case 1:
            printf("the first number: \n");
            scanf("%d", &num1);
            system("cls");
            printf("the second number: \n");
            scanf("%d", &num2);
            system("cls");
            printf("the sum is: %d", add(num1, num2));
            break;
        case 2:
            printf("the first number: \n");
            scanf("%d", &num1);
            system("cls");
            printf("the second number: \n");
            scanf("%d", &num2);
            system("cls");

            printf("the difference is: %d", subtract(num1, num2));
            break;
        case 3:
            printf("the first number: \n");
            scanf("%d", &num1);
            system("cls");
            printf("the second number: \n");
            scanf("%d", &num2);
            system("cls");
            printf("the product is: %d", multiply(num1, num2));
            break;
        case 4:
            printf("the first number: \n");
            scanf("%d", &num1);
            system("cls");
            printf("the second number: \n");
            scanf("%d", &num2);
            system("cls");

            printf("%d", divide(num1, num2));
            break;
        case 5:
            equation();

            break;

        default:
            printf("Invalid operation selected.");
        }

        printf("\nDo you want to perform another calculation? (0 for Yes, 1 for No): ");
        scanf("%d", &i);
        system("cls");
        if (i != 1 && i != 0)
        {
            printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");
        }
        else if (i == 1)
        {
            printf("Exiting the calculator. Goodbye!\n");
        }
    }
    return 0;
}