#include <stdio.h>

#define CUSTOMER_COUNT 3

typedef struct {
    char name[31];
    int rental_days;
    float rental_fee;
    float total_fee;
    float discount;
} Rental;

int main(void) {
    Rental rentals[CUSTOMER_COUNT];
    
    // Take inputs for CUSTOMER_COUNT amount of rentals
    for (int i = 0; i < CUSTOMER_COUNT; i++) {
        printf("Customer %d Information\n", i+1);

        puts("Enter Customer Name: ");
        scanf("%s", rentals[i].name);

        puts("Rental Duration (in days):");
        scanf("%d", &rentals[i].rental_days);

        puts("Enter Daily Rental Fee:");
        scanf("%f", &rentals[i].rental_fee);

        rentals[i].total_fee = rentals[i].rental_days * rentals[i].rental_fee;

        if (rentals[i].rental_days > 7) {
            rentals[i].discount = rentals[i].total_fee / 10;
        } else {
            rentals[i].discount = 0;
        }
    }

    puts("Rental Information");

    float max_disc = 0;
    int max_inx = 0;

    // Print the output and find the max
    for (int i = 0; i < CUSTOMER_COUNT; i++) {
        printf("Customer: %s\n", rentals[i].name);
        printf("Rental Duration: %d Days\n", rentals[i].rental_days);
        printf("Total Cost: %.2f\n", rentals[i].total_fee);
        printf("Discount Applied: %.2f\n", rentals[i].discount);
        
        float discounted_total = rentals[i].total_fee - rentals[i].discount;
        
        printf("Discounted Total Cost: %.2f\n", discounted_total);
    
        if (discounted_total > max_disc) {
            max_disc = discounted_total;
            max_inx = i;
        }
    }

    printf("Customer with the highest discount: %s", rentals[max_inx].name);

    return 0;
}