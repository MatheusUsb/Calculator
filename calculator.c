#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if(b != 0.0)
        return a / b;
    else
        return 0.0; 
}

int main() {
    char operator;
    float firstNumber, secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first operand: ");
    scanf("%f", &firstNumber);

    printf("Enter the second operand: ");
    scanf("%f", &secondNumber);

    switch(operator) {
        case '+':
            printf("%.1f + %.1f = %.1f", firstNumber, secondNumber, add(firstNumber, secondNumber));
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", firstNumber, secondNumber, subtract(firstNumber, secondNumber));
            break;
        case '*':
            printf("%.1f * %.1f = %.1f", firstNumber, secondNumber, multiply(firstNumber, secondNumber));
            break;
        case '/':
            if(secondNumber != 0.0)
                printf("%.1f / %.1f = %.1f", firstNumber, secondNumber, divide(firstNumber, secondNumber));
            else
                printf("Division by zero error!");
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}