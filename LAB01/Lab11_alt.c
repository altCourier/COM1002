#include <stdio.h>

/* prototypes */
int is_palindrome(int n);
int is_prime(int n);

/* main */
int main(void) {
    int n, pal_value, prime_val;

    puts("Enter a number: ");
    scanf("%d", &n);

    printf("Checking if %d is a palindrome.\n", n);
    pal_value = is_palindrome(n);
    printf("Palindrome: %d\n", pal_value);

    printf("Checking if %d is a prime.\n", n);
    prime_val = is_prime(n);
    printf("Prime: %d\n", prime_val);

    return 0;
}

/* checks if a number is a palindrome */
int is_palindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return (original == reversed ?
}