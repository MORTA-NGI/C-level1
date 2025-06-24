#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1;
    int *ptr = &x; // Pointer to an integer

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at ptr: %d\n", *ptr);

    *ptr = 20; // Modify the value of x through the pointer
    printf("Modified value of x: %d\n", x);

    return 0;
}
