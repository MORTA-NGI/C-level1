#include <stdio.h>

int main() {
  unsigned  marks;
  int continueLoop;
  
do {
  printf("Enter your marks (out of 100): ");
  scanf("%u", &marks);
  if (marks >= 90) {
    printf("Grade: A\n");
  } else if (marks >= 80) {
    printf("Grade: B\n");
  } else if (marks >= 70) {
    printf("Grade: C\n");
  } else if (marks >= 60 &&  marks > 50) {
    printf("Grade: D\n");
  } else {
    printf("Grade: F\n");
  }
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &continueLoop);
    } while (continueLoop);

  return 0;
}

