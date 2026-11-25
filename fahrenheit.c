#include <stdio.h>

// Function prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    int choice;
    float temp, converted;

    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius value: ");
            scanf("%f", &temp);
            converted = celsiusToFahrenheit(temp);
            printf("%.1f C = %.1f F\n", temp, converted);
            break;

        case 2:
            printf("Enter Fahrenheit value: ");
            scanf("%f", &temp);
            converted = fahrenheitToCelsius(temp);
            printf("%.1f F = %.1f C\n", temp, converted);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}
