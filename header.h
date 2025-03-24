#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdint>
#include <cmath>


const int32_t MAX_SIZE = 100;

void InputArraySize(int32_t& size);
bool CheckSize(int32_t size);

template <typename T>
void InputArray(T* array, int32_t size) {
    std::cout << "Input " << size << " elements of the array: ";
    for (int32_t i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
}

template <typename T>
void PrintArray(const T* array, int32_t size) {
    for (int32_t i = 0; i < size; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

template <typename T>
int32_t FindElement(const T* array, int32_t size, T target) {
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int32_t MaxElementPosition(const int32_t* array, int32_t size);
int32_t MinElementPosition(const int32_t* array, int32_t size);

template <typename T>
double CalculateAverage(const T* array, int32_t size, int32_t maxPos, int32_t minPos) {
    maxPos -= 1;
    minPos -= 1;

    if (maxPos == minPos || abs(maxPos - minPos) == 1) {
        return -1;
    }

    int32_t start = std::min(minPos, maxPos);
    int32_t end = std::max(minPos, maxPos);

    double sum = 0;
    int32_t count = 0;
    for (int32_t i = start + 1; i < end; ++i) {
        sum += array[i];
        count++;
    }

    return count > 0 ? sum / count : -1;
}

int32_t isPrime(int32_t num);
void PrimeNumbers(const int32_t* array, int32_t size);
int32_t SumOfPrimes(const int32_t* array, int32_t size);

void ReverseArray(int32_t* array, int32_t size);
int32_t DeleteNegativeNumbersFromArray(int32_t* array, int32_t size);

template <typename T>
int32_t CountElements(const T* array, int32_t size) {
    int32_t firstZero = -1;
    int32_t lastZero = -1;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == 0) {
            if (firstZero == -1) firstZero = i;
            lastZero = i;
        }
    }
    return (firstZero != -1 && firstZero != lastZero) 
           ? lastZero - firstZero - 1 : -1;
}

template <typename T>
void BubbleSort(T* array, int32_t size, bool ascending = true) {
    for (int32_t i = 0; i < size - 1; ++i) {
        for (int32_t j = 0; j < size - i - 1; ++j) {
            if ((ascending && array[j] > array[j + 1]) || 
                (!ascending && array[j] < array[j + 1])) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

#endif
