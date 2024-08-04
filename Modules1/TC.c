#include <stdio.h>

int main() {
    
    signed int unsigned_num;
    printf("Enter an unsigned integer: ");
    scanf("%u", &unsigned_num);

    if (unsigned_num > 0) {
        printf("%d is positive.\n", unsigned_num);
    } else {
        printf("%d is Nagative.\n", unsigned_num);
    }

    return 0;
}
