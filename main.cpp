#include <iostream>
#include <cstdint>
#include "header.h"

int main() {
    const int32_t MAX_SIZE = 100;
    int32_t array[MAX_SIZE], size{}, arrayTarget{};
    
    
    InputArraySize(arraySize);
    if (!CheckSize(arraySize)) {
        std::cout << "Error: Invalid array size. Must be between 1 and " 
                  << MAX_SIZE << "\n";
        return 1;
    }
    
    InputArray(array, size);
    

    std::cout << "Your Array: ";
    PrintArray(array, size);

  
    std::cout << "\nInput target element to find: ";
    if (!(std::cin >> arrayTarget)) {
        std::cout << "Error: Invalid input\n";
        return 1;
    }

    int32_t result = FindElement(array, size, arrayTarget);
    if (result != -1) {
        std::cout << "First occurrence of element " << arrayTarget 
                  << " is at position: " << result << '\n';
    } else {
        std::cout << "Element " << arrayTarget << " not found\n";
    }

    int32_t maxPosition = MaxElementPosition(array, size);
    int32_t minPosition = MinElementPosition(array, size);
    double average = CalculateAverage(array, size, maxPosition, minPosition);
    
    std::cout << "\nMax element: " << array[maxPosition - 1] 
              << " at position: " << maxPosition << '\n';
    std::cout << "Min element: " << array[minPosition- 1] 
              << " at position: " << minPosition << '\n';
    
    if (average != -1) {
        std::cout << "Average between min and max: " << average << '\n';
    } else {
        std::cout << "No elements between min and max (they are adjacent or the same).\n";
    }

    PrimeNumbers(array, arraySize);
    std::cout << "Sum of prime numbers: " << SumOfPrimes(array, size) << '\n';

    
    ReverseArray(array, size);
    std::cout << "\nReversed Array: ";
    PrintArray(array, size);

    arraySize = DeleteNegativeNumbersFromArray(array, size);
    std::cout << "Array without negatives: ";
    PrintArray(array, size);

    char order;
    std::cout << "\nSort in ascending order? (y/n): ";
    std::cin >> order;
    bool ascending = (order == 'y' || order == 'Y');
    bubbleSort(array, size, ascending);
    std::cout << "Sorted Array: ";
    PrintArray(array, size);

    int32_t countBetweenZeros = CountElements(array, size);
    if (countBetweenZeros != -1) {
        std::cout << "\nCount of elements between first and last zeros: " 
                  << countBetweenZeros << '\n';
    } else {
        std::cout << "\nNo two different zeros found in array\n";
    }

    return 0;
}
