 #include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose addition.\n");
            break;
        case 2:
            printf("You chose subtraction.\n");
            break;
        case 3:
            printf("You chose multiplication.\n");
            break;
        case 4:
            printf("You chose division.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
