#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    double num1, num2, result;

    printf("Choose operation:\n");
    printf("1. Sum\n2. Difference\n3. Product\n4. Fraction\n5. Factorial\n6. Square Root\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = sum(num1, num2);
            printf("Sum = %lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = difference(num1, num2);
            printf("Difference = %lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = product(num1, num2);
            printf("Product = %lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = fraction(num1, num2);
            printf("Fraction = %lf\n", result);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = factorial(num1);
            printf("Factorial = %lf\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = square_root(num1);
            printf("Square Root = %lf\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
