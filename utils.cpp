#include "utils.h"
#include <stdexcept>

int multiply(int a, int b) {
    return a * b;
}

int getFixedValue() {
    return 42;
}

std::vector<int> allocateArray(int size) {
    if (size < 0) throw std::invalid_argument("size must be non-negative");

    std::vector<int> arr(size);
    for (int i = 0; i < size; ++i)
        arr[i] = i;
    return arr;
}
