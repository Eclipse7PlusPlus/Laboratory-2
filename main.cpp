#include <iostream>
#include <cstdint>
#include "header.h"


int main() {
    int32_t array[MAX_SIZE], arraySize{}, arrayTarget{};
    InputArraySize(arraySize);
    if (!CheckSize(arraySize)) {
        std::cout << "Wrong size :c";
    } else {
        InputArray(array, arraySize);
        system("cls");
        std::cout << "Your Array: ";
        PrintArray(array, arraySize);

        std::cout << "\nInput target element to find: ";
        std::cin >> arrayTarget;
        int32_t result = FindElement(array, arraySize, arrayTarget);
        if (result != -1) {
            std::cout << "Last occurrence of element " << arrayTarget << " is at position: " << result << '\n';
        } else {
            std::cout << "Element " << arrayTarget << " not found\n";
        }

        int32_t maxIndex = MaxElementIndex(array, arraySize);
        int32_t minIndex = MinElementIndex(array, arraySize);
        double average = CalculateAverage(array, arraySize, maxIndex, minIndex);
        std::cout << "Max element: " << array[maxIndex - 1] << " at position: " << maxIndex << '\n';
        std::cout << "Min element: " << array[minIndex - 1] << " at position: " << minIndex << '\n';
        if (average != -1) {
            std::cout << "Average between min and max: " << average << '\n';
        } else {
            std::cout << "No elements between min and max (they are adjacent or the same).\n";
        }

        PrimeNumbers(array, arraySize);
        std::cout << "Sum of prime numbers: " << SumOfPrimes(array, arraySize) << '\n';

        SwapElementsOfArray(array, arraySize);
        std::cout << "Swapped Array: ";
        PrintArray(array, arraySize);

        arraySize = DeleteNegativeNumbersFromArray(array, arraySize);
        std::cout << "Array without negatives: ";
        PrintArray(array, arraySize);

        char order;
        std::cout << "Sort in ascending order? (y/n): ";
        std::cin >> order;
        bool ascending = (order == 'y' || order == 'Y');
        bubbleSort(array, arraySize, ascending);
        std::cout << "Sorted Array: ";
        PrintArray(array, arraySize);

        int32_t countBetweenZeros = CountElements(array, arraySize);
        if (countBetweenZeros != -1) {
            std::cout << "Count of elements between first and last zeros: " << countBetweenZeros << '\n';
        } else {
            std::cout << "No elements between first and last zeros (they are adjacent or the same).\n";
        }
    }
    return 0;
}
