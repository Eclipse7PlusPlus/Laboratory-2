#include <iostream>
#include <cstdint>


const int32_t MAX_SIZE{ 1000 };
void InputArraySize(int32_t&);
bool CheckSize(int32_t);

template <typename T>
void InputArray(T*, int32_t);

void OutputArray(const int32_t*, int32_t);

template <typename T>
int32_t FindElement(const T*, int32_t, T);

int32_t MaxElementIndex(const int32_t*, int32_t);
int32_t MinElementIndex(const int32_t*, int32_t);
double CalculateAverage(int32_t, int32_t);
void PrimeNumbers(const int32_t*, int32_t);
int32_t isPrime(int32_t);
void SwapElementsOfArray(int32_t*, int32_t);
int32_t DeleteNegativeNumbersFromArray(int32_t*, int32_t);

template <typename T>
int32_t CountElements(const T*, int32_t);

template <typename T>
void bubbleSort(T*, int32_t);
