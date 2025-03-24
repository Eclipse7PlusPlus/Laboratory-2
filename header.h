#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdint>
#include <cmath>

const int32_t MAX_SIZE = 100;

void InputArraySize(int32_t& arraySize);
bool CheckSize(int32_t arraySize);

template <typename T>
void InputArray(T* array, int32_t size) {
    std::cout << "Input " << size << " elements of the array: ";
    for (int32_t i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
}

template <typename T>
void PrintArray(T* array, int32_t size) {
    for (int32_t i = 0; i < size; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

template <typename T>
int32_t FindElement(T* array, int32_t size, T target) {
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == target) {
            return i + 1; 
        }
    }
    return -1;
}

int32_t MaxElementPosition(int32_t* array, int32_t size);
int32_t MinElementPosition(int32_t* array, int32_t size);

template <typename T>
double CalculateAverage(T* array, int32_t size, int32_t maxIndex, int32_t minIndex) {
    maxIndex -= 1;
    minIndex -= 1;

    if (maxIndex == minIndex || abs(maxIndex - minIndex) == 1) {
        return -1;
    }

    int32_t start = std::min(minIndex, maxIndex);
    int32_t end = std::max(minIndex, maxIndex);

    double sum = 0;
    int32_t count = 0;
    for (int32_t i = start + 1; i < end; ++i) {
        sum += array[i];
        count++;
    }

    return count > 0 ? sum / count : -1;
}

int32_t isPrime(int32_t num);
void PrimeNumbers(int32_t* array, int32_t size);
int32_t SumOfPrimes(int32_t* array, int32_t size);

void ReverseArray(int32_t* array, int32_t size);
int32_t DeleteNegativeNumbersFromArray(int32_t* array, int32_t size);

template <typename T>
int32_t CountElements(T* array, int32_t size) {
    int32_t firstZeroIndex = -1;
    int32_t lastZeroIndex = -1;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) firstZeroIndex = i;
            lastZeroIndex = i;
        }
    }
    return (firstZeroIndex != -1 && firstZeroIndex != lastZeroIndex) 
           ? lastZeroIndex - firstZeroIndex - 1 : -1;
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
