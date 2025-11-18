#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    // Taking operator input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Taking number inputs
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Performing operations
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
