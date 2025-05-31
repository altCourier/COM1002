#include <stdio.h>

#define AUTHOR_COUNT 3

typedef struct {
    char name[31];
    int book_count;
    int pages;
    float average;
} Author;

int main(void) {
    Author authors[AUTHOR_COUNT];
    
    // Take AUTHOR_COUNT times the input for author: 
    for (int i = 0; i < AUTHOR_COUNT; i++) {
        printf("%d. Author Information\n", i+1);

        puts("Author name: ");
        scanf("%s", authors[i].name);

        puts("Number of books written: ");
        scanf("%d", &authors[i].book_count);

        puts("Total number of pages written: ");
        scanf("%d", &authors[i].pages);
    }

    puts("Average Book Lengths of Authors: ");

    // Calculate the average and print
    for (int i = 0; i < AUTHOR_COUNT; i++) {
        if (authors[i].book_count != 0) {
            authors[i].average = (float) authors[i].pages / authors[i].book_count;
        } else {
            authors[i].average = 0;
        }

        printf("Author: %s\n", authors[i].name);
        printf("Average book length: %.0f\n", authors[i].average);
    }

    // Find the most efficient author
    int max_index = 0;
    for (int i = 1; i < AUTHOR_COUNT; i++) {
        if (authors[i].average > authors[max_index].average) {
            max_index = i;
        }
    }

    printf("\nMost Efficient Author: %s (Average: %.0f)\n",
           authors[max_index].name,
           authors[max_index].average);

    return 0;
}