#include <iostream>
#include <cstdint>
#include "header.h"


int main() {
    int32_t array[MAX_SIZE], arraySize{}, arrayTarget{};
    InputArraySize(arraySize);
    if (!CheckSize(arraySize)) {
        std::cout << "Wrong size :c";
    }
    else {
        InputArray(array, arraySize);
        system("cls");
        std::cout << "Your Array: ";
        OutputArray(array, arraySize);

        std::cout << "\nInput target element to find: ";
        std::cin >> arrayTarget;
        int32_t result = FindElement(array, arraySize, arrayTarget);
        if (result != -1) {
            std::cout << "Last occurrence of element " << arrayTarget << " is at position: " << result << '\n';
        }
        else {
            std::cout << "Element " << arrayTarget << " not found\n";
        }

        int32_t maxIndex = MaxElementIndex(array, arraySize);
        int32_t minIndex = MinElementIndex(array, arraySize);
        int32_t average = CalculateAverage(array[maxIndex], array[minIndex]);
        std::cout << "Max element: " << array[maxIndex] << " at position: " << maxIndex << '\n';
        std::cout << "Min element: " << array[minIndex] << " at position: " << minIndex << '\n';
        std::cout << "Average of max and min: " << average << '\n';

        PrimeNumbers(array, arraySize);

        SwapElementsOfArray(array, arraySize);
        std::cout << "Swapped Array: ";
        OutputArray(array, arraySize);

        arraySize = DeleteNegativeNumbersFromArray(array, arraySize);
        std::cout << "Array without negatives: ";
        OutputArray(array, arraySize);

        bubbleSort(array, arraySize);
        std::cout << "Sorted Array: ";
        OutputArray(array, arraySize);

        std::cout << "Count of elements between first and last zeros: " << CountElements(array, arraySize) << '\n';
    }
    return 0;
}