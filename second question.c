#include <stdio.h>

int main() {
    long long num = 1;
    int i = 1;

    while (i <= 30) {
        num *= i;
        i += 2;   // move to next odd number
    }

    printf("Product of odd numbers between 1 and 30 = %lld \n", num);
    return 0;
}



