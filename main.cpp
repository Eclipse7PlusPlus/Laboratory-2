#include <iostream>
#include <cstdint>

void FillArray(int32_t arr[], int32_t size);
int32_t FindMaxElementIndex(int32_t arr[], int32_t size);
int32_t FindMinElementIndex(int32_t arr[], int32_t size);

int main() {
    const int32_t size{10};
    int32_t arr[size];

    FillArray(arr, size);

    int32_t maxIndex = FindMaxElementIndex(arr, size);
    int32_t minIndex = FindMinElementIndex(arr, size);

    std::cout << "Максимальный элемент: " << arr[maxIndex] << " на позиции: " << maxIndex << std::endl;        
    std::cout << "Минимальный элемент: " << arr[minIndex] << " на позиции: " << minIndex << std::endl;
             
    return 0;
}

void FillArray(int32_t arr[], int32_t size) {
    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int32_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

int32_t FindMaxElementIndex(int32_t arr[], int32_t size) {
    int32_t maxIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int32_t FindMinElementIndex(int32_t arr[], int32_t size) {
    int32_t minIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}