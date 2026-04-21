#include<stdio.h>

int main() {
    int Big, num1, num2;

    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 > num1) {
        Big = num2;
        printf("%d is greater than %d\n", num2, num1);
    } else {
        Big = num1;
        printf("%d is greater than %d\n", num1, num2);
    }

    return 0;
}

