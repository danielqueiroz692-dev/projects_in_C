#include <stdio.h>

int main() {
    int number_1, number_2, result;
    char signal_operator;
    
    printf("Enter a number\n");
    scanf("%d", &number_1);
    printf("Choose one of the four basic arithmetic operations: + , -, *, /\n");
    scanf(" %c", &signal_operator);
    printf("Enter a second number\n");
    scanf("%d", &number_2);

    switch (signal_operator)
    {
    case '+':
        result = number_1 + number_2;
        printf("RESULT: %d", result);
        break;
    case '-':
        result = number_1 - number_2;
        printf("RESULT: %d", result);
        break;
    case '*':
        result = number_1 * number_2;
        printf("RESULT: %d", result);
        break;
    case '/':
        if(number_2 == 0){
            printf("Invalid operation, is is not possible to divide by zero");
        }
        result = number_1 / number_2;
        printf("RESULT: %d", result);
        break;
    default:
        printf("Invalid operator");
    }

    return 0;
}