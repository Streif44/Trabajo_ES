#include <iostream>

void analyzeValue(int x) {
    if (x > 20) {
        std::cout << "Muy grande\n";
    } else if (x > 10) {
        std::cout << "Grande\n";
    } else {
        std::cout << "Pequeño\n";
    }

    // Eliminada comparación redundante x == x
}
