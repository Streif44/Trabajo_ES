#include "calculator.h"
#include <stdexcept>

int Calculator::compute(int a, int b, char op) {
    switch (op) {
        case '+': lastResult = a + b; break;
        case '-': lastResult = a - b; break;
        case '*': lastResult = a * b; break;
        case '/':
            if (b == 0) throw std::runtime_error("Division by zero");
            lastResult = a / b;
            break;
        default:
            throw std::invalid_argument("Unknown operator");
    }
    return lastResult;
}
