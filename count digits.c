#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Make number positive if it's negative
        if (num < 0)
            num = -num;

        // Count digits
        while (num > 0) {
            num = num / 10;  // remove one digit
            count++;         // increase count
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
