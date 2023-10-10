#include <stdio.h>

typedef struct {
    double a;
    double b;
    char operation;
} Calculator;

double calculate(Calculator calc) {
    double result;
    switch (calc.operation) {
        case '+':
            result = calc.a + calc.b;
            break;
        case '-':
            result = calc.a - calc.b;
            break;
        case '*':
            result = calc.a * calc.b;
            break;
        case '/':
            if (calc.b == 0) {
                printf("Cannot divide by zero.\n");
                return 0;
            }
            result = calc.a / calc.b;
            break;
        default:
            printf("Invalid operation. Please choose +, -, *, or /.\n");
            return 0;
    }
    return result;
}

int main() {
    double a, b;
    char operation;

    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    Calculator calc;
    calc.a = a;
    calc.b = b;
    calc.operation = operation;

    double result = calculate(calc);
    printf("Result: %lf\n", result);

    return 0;
}
