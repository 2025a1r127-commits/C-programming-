#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for the table number
    for(i = 1; i <= 10; i++) {
        printf("Multiplication Table of %d:\n", i);
        
        // Inner loop for multiplication
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Print a blank line between tables
    }

    return 0;
}
