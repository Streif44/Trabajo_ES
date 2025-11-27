#include "utils.h"
#include <stdexcept>

int multiply(int a, int b) {
    return a * b;
}

// Eliminado multiply_v2: era duplicado

// Ahora devuelve un valor, no un puntero inválido
int getFixedValue() {
    return 42;
}

// Uso de smart pointers para evitar fugas
std::vector<int> allocateArray(int size) {
    if (size < 0) throw std::invalid_argument("size must be non-negative");

    std::vector<int> arr(size);
    for (int i = 0; i < size; ++i)
        arr[i] = i;
    return arr;
}
