#include <stdio.h>

int math(int a, int b, char c);


int main() {
    int num1 =8;
    int num2 =4;
    char operator = '/';
    printf("%d", math(num1, num2, operator));

    return 0;
}

int math(int a, int b, char operator)
{
    int ans;
    if (operator =='+'){
        ans = a + b;
    } else if (operator == '-') {
        ans = a - b;
    } else if (operator == '*') {
        ans = a * b;
    } else if (operator == '/') {
        ans = a / b;
    } else if (operator == '%') {
        ans = a % b;
    } else if (operator == '<') {
        ans = a << b;
    } else if (operator == '>') {
        ans = a >> b;
    } else if (operator == '&') {
        ans = a & b;
    } else if (operator == '|') {
        ans = a | b;
    } else if (operator == '^') {
        ans = a ^ b;
    } else if (operator == '~') {
        ans = ~a;
    }
    return ans;
}
