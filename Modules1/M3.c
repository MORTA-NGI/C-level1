#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    int age;
    char address[100];
    char gender;
    int continueLoop = 1;

    while (continueLoop) {
        printf("Enter your name: ");
        scanf("%s", name);

        printf("Enter your age: ");
        scanf("%d", &age);

        printf("Enter your address: ");
        scanf("%s", address);

        printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);

        printf("\nName: %s\n", name);
        printf("Age: %d\n", age);
        printf("Address: %s\n", address);
        printf("Gender: %c\n\n", gender);

        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &continueLoop);
    }

    return 0;
}



















/*
int num;
int a=0;
char name[20];
printf("ENTER THE NUMBER OF NAMES");
scanf("%d", &num);
do{
    printf("enter your name \t");
    scanf("%s", &name);
    printf("%s \n", name);
    a++;
 
} while (a < num);
    
    return 0;
}
*/ 