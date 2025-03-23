#include <iostream>
#include <cstdint>
#include "header.h"

template <typename T>

void InputArraySize(int32_t& arraySize)
{
    std::cout << "Input size of array: ";
    std::cin >> arraySize;
}

bool CheckSize(int32_t arraySize) {
    return arraySize > 0 && arraySize <= MAX_SIZE;
}

template <typename T>
void InputArray(T* array, int32_t size) {
    std::cout << "Input " << size << " elements of the array: ";
    for (int32_t i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
}

void PrintArray(const T* array, int32_t size) {
    for (int32_t i = 0; i < size; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
} 

template <typename T>
int32_t FindElement(const T* array, int32_t size, T target) {
    int32_t position = -1;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == target) {
            position = i + 1; // Возвращаем позицию, начиная с 1
        }
    }
    return position;
}
int32_t MaxElementIndex(const int32_t* array, int32_t size) {
    int32_t maxIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i+1;
        }
    }
    return maxIndex;
}

int32_t MinElementIndex(const int32_t* array, int32_t size) {
    int32_t minIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex+1;
}

template <typename T>
double CalculateAverageBetweenMinMax(const T* array, int32_t size, int32_t maxIndex, int32_t minIndex) {
    maxIndex -= 1;
    minIndex -= 1;

    if (maxIndex == minIndex || abs(maxIndex - minIndex) == 1) {
        return -1; // Нет элементов между min и max
    }
    
    int32_t start = (minIndex < maxIndex) ? minIndex : maxIndex;
    int32_t end = (minIndex < maxIndex) ? maxIndex : minIndex;

    double sum = 0;
    int32_t count = 0;
    for (int32_t i = start + 1; i < end; ++i) {
        sum += array[i];
        count++;
    }

    if (count == 0) {
        return -1;
    }

    return sum / count;
}

int32_t isPrime(int32_t num) {
    if (num <= 1) return 0; // Числа меньше или равные 1 не являются простыми
    if (num <= 3) return 1; // 2 и 3 — простые числа
    if (num % 2 == 0 || num % 3 == 0) return 0; // Отсекаем четные числа и кратные 3

    // Проверяем делители от 5 до квадратного корня из num с шагом 6
    for (int32_t i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int32_t SumOfPrimes(const int32_t* array, int32_t size) {
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
        int32_t temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

int32_t DeleteNegativeNumbersFromArray(int32_t* array, int32_t size) {
    int32_t newSize = 0;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] >= 0) {
            array[newSize++] = array[i];
        }
    }
  
    for (int32_t i = newSize; i < size; ++i) {
        array[i] = 0;
    }
    return newSize;
}

template <typename T>
int32_t CountElements(const T* array, int32_t size) {
    int32_t firstZeroIndex = -1;
    int32_t lastZeroIndex = -1;
    for (int32_t i = 0; i < size; ++i) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            }
            lastZeroIndex = i;
        }
    }
    if (firstZeroIndex == -1 || firstZeroIndex == lastZeroIndex) {
        return -1;
    }
    return lastZeroIndex - firstZeroIndex - 1;
}

template <typename T>
void bubbleSort(T* array, int32_t size) {
    for (int32_t i = 0; i < size - 1; ++i) {
        for (int32_t j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
