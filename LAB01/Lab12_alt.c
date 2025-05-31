#include <stdio.h>

/* initialize e*/
int main(void) {
    int n;
    
    printf("Enter the number of Fibonacci numbers: ");
    scanf("%d", &n);

    int first = 0, second = 1, fib;
    int sum_even = 0, sum_odd = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fib = 0;
        } else if (i == 1) {
            fib = 1;
        } else {
            fib = first + second;
            first = second;
            second = fib;
        }

        printf("Fib(%d) = %d\n", i, fib);

        switch (i % 2) {
            case 0:
                sum_even += fib;
                break;
            case 1:
                sum_odd += fib;
                break;
        }
    }

    int total_sum = sum_even + sum_odd;

    printf("Sum of Fibonacci numbers at odd indices: %d\n", sum_odd);
    printf("Sum of Fibonacci numbers at even indices: %d\n", sum_even);
    printf("Total sum of Fibonacci numbers: %d\n", total_sum);

    return 0;
}