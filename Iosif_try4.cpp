#include "Array.h"
#include <iostream>
#include <ctime>
#include <locale>


int josephus(int n, int k) {
    Array arr(n);
    int index = 0;

    while (arr.getSize() > 1) {
        index = (index + k - 1) % arr.getSize(); 
        arr.remove(index);
    }

    return arr.get(0); 
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n, k;
    std::cout << "Введите N: ";
    std::cin >> n;
    std::cout << "Введите k: ";
    std::cin >> k;

    clock_t start = clock();
    int result = josephus(n, k);
    clock_t end = clock(); //Фиксация до и после выполнения

    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "Ответ: " << result << std::endl;
    std::cout << "Время: " << time << " секунд" << std::endl; //Перевод тактов в секунды 

    return 0;
}