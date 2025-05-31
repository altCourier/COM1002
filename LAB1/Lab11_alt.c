/* include */
#include <stdio.h>

/* prototypes */
int is_palindrome(int n);
int is_prime(int n);

/* initializer */
int main(void) {
    int n, pal_value, prime_val;

    puts("Enter a number: ");
    scanf("%d", &n);

    printf("%s%d%s", "Checking if ", n ," is a palindrome.\n");
    pal_value = is_palindrome(n);
    printf("%d", pal_value);

    printf("%s%d%s", "Checking if ", n ," is a prime.\n");
    prime_val = is_prime(n);
    printf("%d", prime_val);

    return 0;
}

/* functions */
int is_palindrome(int n) {
    // 121 integer
    // 121 % 10 = 1 --> Always gets the last number
    // 121 / 10 = 12 --> Discards the last number
    // GET the last number -> Discard the last number -> Do it until 0.
    // 121 --> 12 --> 1 --> 0
    int copy = n;
    int check = 0;

    while (copy > 0) {
        check += check * 10 + copy % 10;
        copy /= 10;
    }

    return (check == n ? 1 : 0);
}

int is_prime(int n) {

}