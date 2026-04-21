
#include <stdio.h>

int main() {
    int num, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        digit = num % 10;

        if (digit == 0) {
            count++;
        } else {
            sum = sum + digit;
        }

        num = num / 10;

    } while (num > 0);

    printf("Zero count = %d\n", count);
    printf("Sum of non-zero digits = %d\n", sum);

    return 0;
}
