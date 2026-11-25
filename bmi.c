#include <stdio.h>

// Function prototypes
float calculateBMI(float weightKg, float heightM);
void categorizeBMI(float bmi);

int main() {
    float weight, height;

    // Read weight (kg) and height (m)
    scanf("%f %f", &weight, &height);

    float bmi = calculateBMI(weight, height);
    printf("BMI: %.2f\n", bmi);
    categorizeBMI(bmi);

    return 0;
}

float calculateBMI(float weightKg, float heightM) {
    return weightKg / (heightM * heightM);
}

void categorizeBMI(float bmi) {
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0) {
        printf("Category: Normal\n");
    } else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
}
