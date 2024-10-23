#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
     int number;  // Declare an integer variable

    printf("Enter an integer: ");  // Prompt user for input
    scanf("%d", &number);
    int result = factorial(number);  // Function call

    printf("Factorial of %d is %d\n", number, result);  // Output: Factorial of 5 is 120

    return 0;
}
