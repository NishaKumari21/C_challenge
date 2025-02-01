// 6️⃣ Count the number of digits in a number.

#include <stdio.h>

int main() {
    int n, count = 0;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handling case when number is 0
    if (n == 0) {
        count = 1;
    } else {
        // Counting digits
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    // Printing the number of digits
    printf("Length of number: %d\n", count);

    return 0;
}
