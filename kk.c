#include<stdio.h>


int main() {
    int upper, i;

    // Input upper bound
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Even numbers up to %d:\n", upper);
    for (i = 1; i <= upper; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers up to %d:\n", upper);
    for (i = 1; i <= upper; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

