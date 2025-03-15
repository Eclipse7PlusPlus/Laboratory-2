#include <iostream>
#include <cstdint>

void FillArray(int32_t arr[], int32_t size);
int32_t MaxElementIndex(int32_t arr[], int32_t size);
int32_t MinElementIndex(int32_t arr[], int32_t size);
double CalculateAverage(int32_t arr[], int32_t size); 

int main() {
    const int32_t size{10};
    int32_t arr[size];

    FillArray(arr, size);

    int32_t maxIndex = MaxElementIndex(arr, size);
    int32_t minIndex = MinElementIndex(arr, size);
    double average = CalculateAverage(arr,size); 

    std::cout << "Максимальный элемент: " << arr[maxIndex] << " на позиции: " << maxIndex << std::endl;        
    std::cout << "Минимальный элемент: " << arr[minIndex] << " на позиции: " << minIndex << std::endl;
    std::cout <<"Среднее арифметическое максимального и минимального элементов: " << average << std::endl;         
    return 0;
}

void FillArray(int32_t arr[], int32_t size) {
    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int32_t i = 0; i < size; ++i) 
    {
        std::cin >> arr[i];
    }
}

int32_t MaxElementIndex(int32_t arr[], int32_t size) {
    int32_t maxIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int32_t MinElementIndex(int32_t arr[], int32_t size) {
    int32_t minIndex = 0;
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}
double CalculateAverage(const int32_t arr[], int32_t size) {
    int32_t maxElement = arr[0];
    int32_t minElement = arr[0];
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    for (int32_t i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return (maxElement+minElement)/2;
}
