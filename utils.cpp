#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int multiply_v2(int a, int b) {
    return a * b;
}

int* getPointer() {
    int x = 42;
    return &x;
}

int* allocateArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i;
    return arr;
}
