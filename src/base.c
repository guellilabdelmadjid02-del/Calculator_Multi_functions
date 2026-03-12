#include <stdio.h>
#include <stdlib.h>
#include "../include/equations.h"
#include <unistd.h>
int base();
int base()
{
    int oper, num1, num2, i = 0;
    printf(" \033[1;94m Welcome to the CLI Calculator devloped by: GUELLIL   \033[0m\n");
    printf(" \033[1;94m Press any key to continue...   \033[0m\n");
    getchar();

    while (i == 0)

    {

        do // Loop to ensure valid operation selection
        {

            printf("________________Welcome to the CLI Calculator! ________________\n");

            printf("| \033[1;32m              Select an operation to perform:  \033[0m             |\n");
            printf("|   \033[1;36m        1. Addition                            \033[0m           | \n");
            printf("|   \033[1;36m        2. Subtraction                           \033[0m         | \n");
            printf("|   \033[1;36m        3. Multiplication                          \033[0m       | \n");
            printf("|   \033[1;36m        4. Division                            \033[0m           | \n");
            printf("|   \033[1;36m        5. Solve a quadratic equation              \033[0m       | \n");
            printf("|   \033[1;36m        6. Exit                                \033[0m           | \n");
            printf("_______________________________________________________________\n");
            printf(" \033[1;93mEnter the number corresponding to the desired operation: \033[0m  ");
            scanf("%d", &oper);
            // sleep(1);
            system("cls");
            if (oper < 1 || oper > 6)
            {
                printf(" \033[1;91mInvalid operation. Please select a number between 1 and 6.\033[0m\n");
            }
        } while (oper < 1 || oper > 6);

        if (oper == 6)
        {

            printf("  \033[1;93m Exiting the calculator. Goodbye!     ('__') \033[0m  \n");
            sleep(2);

            printf("preess any key to continue...");
            getchar();

            return 0;
        }

        switch (oper)
        {
        case 1:
            printf("\033[1;95m the first number: \033[0m \n");
            scanf("%d", &num1);
            system("cls");
            printf("\033[1;95m the second number: \033[0m \n");
            scanf("%d", &num2);
            system("cls");
            printf("the sum is: %d", add(num1, num2));
            break;
        case 2:
            printf("\033[1;95m the first number: \033[0m  \n");
            scanf("%d", &num1);
            system("cls");
            printf("\033[1;95m the second number: \033[0m \n");
            scanf("%d", &num2);
            system("cls");

            printf("the difference is: %d", subtract(num1, num2));
            break;
        case 3:
            printf("\033[1;95m the first number: \033[0m \n");
            scanf("%d", &num1);
            system("cls");
            printf("\033[1;95m the second number: \033[0m \n");
            scanf("%d", &num2);
            system("cls");
            printf(" \033[1;95mthe product is: %d\033[0m", multiply(num1, num2));
            break;
        case 4:
            printf("\033[1;95m the first number: \033[0m  ");
            scanf("%d", &num1);
            system("cls");
            printf("\033[1;95m the second number: \033[0m  ");
            scanf("%d", &num2);
            system("cls");
            if (num2 == 0)
            {

                do // Loop to ensure valid division selection
                {
                    printf(" \033[1;91mError: Division by zero is not allowed. Please enter a non-zero divisor.\033[0m\n");
                    printf("\033[1;95m the second number: \033[0m  ");
                    scanf("%d", &num2);
                    system("cls");
                } while (num2 == 0);
            }

            else
            {
                printf(" \033[1;95mthe quotient is: %f\033[0m \n", divide(num1, num2));
            }
            break;

        case 5:
            equation();

            break;

        default:
            printf(" \033[1;91mInvalid operation selected. Please try again.\033[0m\n");
        }

        char b;
        printf("\n \033[1;93mDo you want to perform another calculation? (y for Yes, n for No): \033[0m"); // Loop to ensure valid input for performing another calculation
        scanf(" %c", &b);

        printf("\033[A");
        printf("\033[2K");

        printf("\033[A");
        printf("\033[2K");

        printf("\033[A");
        printf("\033[2K");

        if (b != 'y' && b != 'n' && b != 'Y' && b != 'N')
        {

            do
            {
                printf(" \033[1;91mInvalid input. Please enter 'y' for Yes or 'n' for No.\033[0m ");
                scanf(" %c", &b);
                system("cls");
            } while (b != 'y' && b != 'n' && b != 'Y' && b != 'N');
        }
        if (b == 'N' || b == 'n')
        {
            printf(" \033[1;93mExiting the calculator. Goodbye!\033[0m\n");
            sleep(2);
            system("cls");
            i = 1;
        }
        else if (b == 'Y' || b == 'y')
        {
            continue;
        }
    }
    return 0;
}
