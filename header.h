#include <iostream>
#include <cstdint>


void InputArraySize(int32_t&);
bool CheckSize(int32_t);
const int32_t MAX_SIZE{ 1000 };
void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
int32_t FindElement(int32_t*, int32_t, int32_t);
int32_t MaxElementIndex(const int32_t, int32_t);
int32_t MinElementIndex(const int32_t, int32_t);
int32_t CalculateAverage(int32_t, int32_t);
void PrimeNumbers(const int32_t, int32_t);
int32_t isPrime(int32_t);
void SwapElementsOfArray(int32_t*, int32_t);
void DeleteNegativeNumbersFromArray(int32_t*, int32_t);

template <typename Type>
int CountElements(Type* , int);

template <typename T>
void bubbleSort(T* array, int size)

