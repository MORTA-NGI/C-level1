#include <stdio.h>

int main() {
    double num1 = 3.14159;
    int num2 = 7;

    // Explicit conversion: double to int
    int result1 = (int)num1;

    // Explicit conversion: int to double
    double result2 = (double)num2;

    printf("(double to int): %d\n", result1);
    printf("(int to double): %.2lf\n", result2);

    return 0;
}
