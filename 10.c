#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // Printing the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
