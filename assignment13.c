#include<stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Above temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

