#include <iostream>
#include <cstdint>
#include "header.h"


void InputArraySize(int32_t& arraySize)
{
    std::cout << "Input size of array: ";
    std::cin >> arraySize;
}

bool CheckSize(int32_t arraySize)
{
    return arraySize > 0 && arraySize < MAX_SIZE;
}

void InputArray(int32_t* array, int32_t arraySize)
{
    for (size_t i{}; i < arraySize; ++i)
    {
        std::cin >> array[i];
    }
}

void OutputArray(int32_t* array, int32_t arraySize)
{
    for (size_t i{}; i < arraySize; ++i)
    {
        std::cout << array[i] << ' ';
    }
}

int32_t FindElement(int32_t* array, int32_t arraySize, int32_t arrayTarget)
{
    int32_t position = -1;
    for (int32_t i = 0; i < arraySize; ++i)
    {
        if (array[i] == arrayTarget)
        {
            position = i + 1;
        }
    }
    return position;
}

int32_t MaxElementIndex(const int32_t arr[], int32_t size) {
    int32_t maxIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int32_t MinElementIndex(const int32_t arr[], int32_t size) {
    int32_t minIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int32_t CalculateAverage(int32_t maxElement, int32_t minElement) {
    return (maxElement + minElement) / 2;
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

void PrimeNumbers(const int32_t arr[], int32_t size) {
    int32_t sum = 0;
    std::cout << "������� ����� � �������: ";
    for (int32_t i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            std::cout << arr[i] << " ";
            sum += arr[i];
        }
    }
    std::cout << std::endl;
    std::cout << "����� ������� �����: " << sum << std::endl;
}

void SwapElementsOfArray(int32_t* arr, int32_t size)
{
    int32_t temp{};
    for (int32_t i{}; i < size / 2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void DeleteNegativeNumbersFromArray(int32_t* arr, int32_t size)
{
    int32_t temp{};
    for (int32_t i{}; i < size - 1; ++i)
    {
        if (arr[i] < 0)
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
        if (arr[size - 1] < 0)
        {
            arr[size - 1] = 0;
        }
    }
}

template <typename Type>
int CountElements(Type* array, int size) 
{
    int firstZeroIndex{-1}; 
    int lastZeroIndex{-1};
    for (int i = 0; i < size; i++) 
    {
        if (array[i] == T(0)) 
        { 
            if (firstZeroIndex == -1) 
            {
                firstZeroIndex = i;
            }
            firstZeroIndex = i; 
        }
    }
    if (firstZeroIndex == -1  lastZeroIndex == -1  firstZeroIndex == lastZeroIndex) 
    {
        return -1;
    }
    return lastZeroIndex - firstZeroIndex - 1;
}

template <typename T>
void bubbleSort(T* array, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j],array[j+1]);
            }
        }
    }
}