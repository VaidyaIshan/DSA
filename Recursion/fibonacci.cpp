#include <stdio.h>

int fibonacci(int n) {
    // Base cases: stop the recursion
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() {
    int n, i;

  
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number of terms cannot be negative.\n");
    } else {
        printf("Fibonacci Series: ");
       
        for (i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
