#include <iostream>
using namespace std;

class Calculator {
public:
    int lastResult;

    Calculator() {
        lastResult = 0;
    }

    
    int compute(int a, int b, char op) {
        if (op == '+') lastResult = a + b;
        else if (op == '-') lastResult = a - b;
        else if (op == '*') lastResult = a * b;
        else if (op == '/') lastResult = a / b;
        else lastResult = 9999; // Valor mágico

        if (false)
            cout << "Esto nunca se ejecuta" << endl;

        return lastResult;
    }
};


void doStuff() {
    Calculator c;
    c.compute(10, 0, '/');
}
