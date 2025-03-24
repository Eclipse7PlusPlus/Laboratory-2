#include <iostream>
#include <cstdint>
#include "header.h"

void InputArraySize(int32_t& size) {
    std::cout << "Input size of array: ";
    std::cin >> size;
}

bool CheckSize(int32_t size) {
    return size > 0 && size <= MAX_SIZE;
}

int32_t MaxElementIndex(int32_t* array, int32_t size) {
    int32_t maxIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex + 1;
}

int32_t MinElementIndex(int32_t* array, int32_t size) {
    int32_t minIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex + 1;
}

int32_t isPrime(int32_t num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int32_t i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void PrimeNumbers(int32_t* array, int32_t size) {
    std::cout << "Prime numbers: ";
    for (int32_t i = 0; i < size; ++i) {
        if (isPrime(array[i])) {
            std::cout << array[i] << ' ';
        }
    }
    std::cout << '\n';
}

int32_t SumOfPrimes(int32_t* array, int32_t size) {
    int32_t sum = 0;
    for (int32_t i = 0; i < size; ++i) {
        if (isPrime(array[i])) {
            sum += array[i];
        }
    }
    return sum;
}

void SwapElementsOfArray(int32_t* array, int32_t size) {
    for (int32_t i = 0; i < size / 2; ++i) {
        std::swap(array[i], array[size - 1 - i]);
    }
}

int32_t DeleteNegativeNumbersFromArray(int32_t* array, int32_t size) {
    int32_t newSize = 0;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] >= 0) {
            array[newSize++] = array[i];
        }
    }
    return newSize;
}
