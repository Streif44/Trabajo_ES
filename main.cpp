#include <iostream>
#include <vector>
#include "utils.h"
#include "calculator.h"

int processData(const std::vector<int>& data, bool doubleResult = false) {
    int result = 0;

    for (int value : data) {
        if (value > 0) {
            if (value % 2 == 0) result += value / 2;
            else if (value % 3 == 0) result += value * 3;
            else if (value % 5 == 0) result += value - 5;
            else result += value;
        } 
        else if (value < 0) {
            if (value == -1) result -= 10;
            else result += value;
        } 
        else { // value == 0
            result += 100;
        }
    }

    return doubleResult ? result * 2 : result;
}

int main() {
    std::vector<int> data = {10, -1, 7, 0, 15};

    int result = processData(data);

    std::cout << "Resultado: " << result << std::endl;

    Calculator calc;
    std::cout << "Suma con Calculator: " << calc.compute(10, 5, '+') << std::endl;

    return 0;
}
