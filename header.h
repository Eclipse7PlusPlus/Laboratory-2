#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdint>

void InputArraySize(int32_t& arraySize);
bool CheckSize(int32_t arraySize);

template <typename T>
void InputArray(T* array, int32_t size);

template <typename T>
void PrintArray(const T* array, int32_t size);

template <typename T>
int32_t FindElement(const T* array, int32_t size, T target);

int32_t MaxElementIndex(const int32_t* array, int32_t size);
int32_t MinElementIndex(const int32_t* array, int32_t size);
double CalculateAverage(const int32_t* array, int32_t size);

int32_t isPrime(int32_t num);
void PrimeNumbers(const int32_t* array, int32_t size);
int32_t SumOfPrimes(const int32_t* array, int32_t size);

void SwapElementsOfArray(int32_t* array, int32_t size);
int32_t DeleteNegativeNumbersFromArray(int32_t* array, int32_t size);

template <typename T>
int32_t CountElements(const T* array, int32_t size);

template <typename T>
void bubbleSort(T* array, int32_t size);
