#include <stdio.h>

int main() {
    int choice, num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Sum: %d\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Difference: %d\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Product: %d\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("Quotient: %d\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
