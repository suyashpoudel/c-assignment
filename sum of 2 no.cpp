#include <stdio.h>

int main() {
    
    int a, b;

   
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

  
    int sum = a + b;

   
    printf("Sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}

