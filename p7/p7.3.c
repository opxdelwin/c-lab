#include <stdio.h>

int main(void)
{

    int num1, num2;
    char operation;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nA for Addition\nS for Subtraction\nM for Multiplication\nD for division\n\n");
    printf("Enter operation code: ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case 'A':
        printf("Addition of numbers are %d\n", num1 + num2);
        break;
    case 'S':
        printf("Subtraction of numbers are %d\n", num1 - num2);
        break;

    case 'M':
        printf("Product of numbers are %d\n", num1 * num2);
        break;

    case 'D':
        printf("Division of numbers are %d\n", num1 / num2);
        break;

    default:
        printf("Incorrect option. Terminating \n");
        break;
    }

    return 0;
}