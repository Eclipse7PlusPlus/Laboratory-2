#include <iostream>
#include <cstdint>

void FillArray(int32_t arr[], int32_t size);
int32_t MaxElementIndex(const int32_t arr[], int32_t size);
int32_t MinElementIndex(const int32_t arr[], int32_t size);
int32_t CalculateAverage(int32_t maxElement, int32_t minElement);
void PrimeNumbers(const int32_t arr[], int32_t size);
int32_t isPrime(int32_t num);  

int main() {
    const int32_t size{10};
    int32_t arr[size];

    FillArray(arr, size);
    // Goood day dood vibes
    int32_t maxIndex = MaxElementIndex(arr, size);
    int32_t minIndex = MinElementIndex(arr, size);
    int32_t average = CalculateAverage(arr[maxIndex], arr[minIndex]);

    std::cout << "Максимальный элемент: " << arr[maxIndex] << " на позиции: " << maxIndex << std::endl;
    std::cout << "Минимальный элемент: " << arr[minIndex] << " на позиции: " << minIndex << std::endl;
    std::cout << "Среднее арифметическое максимального и минимального элементов: " << average << std::endl;

    PrimeNumbers(arr, size);

    return 0;
}

void FillArray(int32_t arr[], int32_t size) {
    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int32_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
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
    std::cout << "Простые числа в массиве: ";
    for (int32_t i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            std::cout << arr[i] << " ";
            sum += arr[i];
        }
    }
    std::cout << std::endl;
    std::cout << "Сумма простых чисел: " << sum << std::endl;
}