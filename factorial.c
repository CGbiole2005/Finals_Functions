#include <stdio.h>

// Function prototype above main()
int factorial(int n);

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, factorial(num));

    return 0;
}
