#include "Array.h"
#include <iostream>

Array::Array(int n) {
    size = n;
    data = new int[n];
    for (int i = 0; i < n; ++i) {
        data[i] = i + 1;  
    }
} 

Array::~Array() {
    delete[] data;
}

void Array::remove(int index) {
    for (int i = index; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    size--;
} 

int Array::getSize() const {
    return size;
}

int Array::get(int index) const {
    return data[index];
} //возвращение по индексу готового размера