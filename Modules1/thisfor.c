#include <stdio.h>

int main(){

char name[50];
    unsigned  age;
    char address[100];
    char gender;
    unsigned  numN;
    
    printf("Enter the number of names: ");
    scanf("%u", &numN);

    for(int i=0; i< numN; i++) {
        printf("Enter your name: ");
        scanf("%s", name);

        printf("Enter your age: ");
        scanf("%u", &age);

        printf("Enter your address: ");
        scanf("%s", address);

        printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);

        printf("\nName: %s\n", name);
        printf("Age: %d\n", age);
        printf("Address: %s\n", address);
        printf("Gender: %c\n\n", gender);

    }

    return 0;
}
