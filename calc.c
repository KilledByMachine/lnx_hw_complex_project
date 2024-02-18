#include "calc.h"
#include <math.h>

double sum(double num1, double num2) {
    return num1 + num2;
}

double difference(double num1, double num2) {
    return num1 - num2;
}

double product(double num1, double num2) {
    return num1 * num2;
}

double fraction(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return num1 / num2;
}

double factorial(double num) {
    if (num < 0) {
        printf("Error: Factorial of a negative number\n");
        return 0;
    }
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

double square_root(double num) {
    if (num < 0) {
        printf("Error: Square root of a negative number\n");
        return 0;
    }
    return sqrt(num);
}
