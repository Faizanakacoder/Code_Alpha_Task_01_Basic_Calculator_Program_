#include <stdio.h>

int main()
{
    double num1, num2, result;
    char op;

    printf("=================================\n");
    printf("      BASIC CALCULATOR\n");
    printf("=================================\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("\nResult = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult = %.2lf\n", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult = %.2lf\n", result);
            }
            else
            {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("\nInvalid Operator!\n");
    }

    return 0;
}
