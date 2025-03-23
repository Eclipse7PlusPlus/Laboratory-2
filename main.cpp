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
            std::cout << "Last occurrence of element " << arrayTarget << " is at position: " << result + 1 << '\n';
        } else {
            std::cout << "Element " << arrayTarget << " not found\n";
        }

        int32_t maxIndex = MaxElementIndex(array, arraySize);
        int32_t minIndex = MinElementIndex(array, arraySize);
        double average = CalculateAverage(array, arraySize);
        std::cout << "Max element: " << array[maxIndex] << " at position: " << maxIndex + 1 << '\n';
        std::cout << "Min element: " << array[minIndex] << " at position: " << minIndex + 1 << '\n';
        std::cout << "Average of max and min: " << average << '\n';

        PrimeNumbers(array, arraySize);
        std::cout << "Sum of prime numbers: " << SumOfPrimes(array, arraySize) << '\n';

        SwapElementsOfArray(array, arraySize);
        std::cout << "Swapped Array: ";
        PrintArray(array, arraySize);

        arraySize = DeleteNegativeNumbersFromArray(array, arraySize);
        std::cout << "Array without negatives: ";
        PrintArray(array, arraySize);

        bubbleSort(array, arraySize);
        std::cout << "Sorted Array: ";
        PrintArray(array, arraySize);

        std::cout << "Count of elements between first and last zeros: " << CountElements(array, arraySize) << '\n';
    }
    return 0;
}
