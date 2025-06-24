#include <stdio.h>

int main() {
    int num1 = 10;
    float num2 = 3.14;

    // Implicit conversion: num1 is promoted to float
    float result = num1 + num2;

    printf("Implicit conversion: %.2f\n", result);

    return 0;
}
