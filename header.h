#include <iostream>
#include <cstdint>


void InputArraySize(int32_t&);
bool CheckSize(int32_t);
const int32_t MAX_SIZE{ 1000 };
void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
int32_t FindElement(int32_t*, int32_t, int32_t);
int32_t MaxElementIndex(const int32_t arr[], int32_t size);
int32_t MinElementIndex(const int32_t arr[], int32_t size);
int32_t CalculateAverage(int32_t maxElement, int32_t minElement);
void PrimeNumbers(const int32_t arr[], int32_t size);
int32_t isPrime(int32_t num);
void SwapElementsOfArray(int32_t* array, int32_t sizeArray);
void DeleteNegativeNumbersFromArray(int32_t* array, int32_t sizeArray);