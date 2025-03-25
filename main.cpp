#include <iostream>
#include <cstdint>
#include "header.h"

int main() {
    int32_t array[MAX_SIZE], size = 0, target = 0;
    
    InputArraySize(size);
    if (!CheckSize(size)) {
        std::cerr << "Error: Invalid array size. Must be between 1 and " 
                 << MAX_SIZE << "\n";
        return 1;
    }
    
    InputArray(array, size);
    
    std::cout << "Your Array: ";
    PrintArray(array, size);

    std::cout << "\nInput target element to find: ";
    if (!(std::cin >> target)) {
        std::cerr << "Error: Invalid input\n";
        return 1;
    }

    int32_t result = FindElement(array, size, target);
    if (result != -1) {
        std::cout << "First occurrence of element " << target 
                  << " is at position: " << result << '\n';
    } else {
        std::cout << "Element " << target << " not found\n";
    }

    int32_t maxPos = MaxElement(array, size);
    int32_t minPos = MinElement(array, size);
    double average = CalculateAverage(array, size, maxPos, minPos);
    
    std::cout << "\nMax element: " << array[maxPos - 1] 
              << " at position: " << maxPos << '\n';
    std::cout << "Min element: " << array[minPos - 1] 
              << " at position: " << minPos << '\n';
    
    if (average != -1) {
        std::cout << "Average between min and max: " << average << '\n';
    } else {
        std::cout << "No elements between min and max (they are adjacent or the same).\n";
    }

    PrimeNumbers(array, size);
    std::cout << "Sum of prime numbers: " << SumOfPrimes(array, size) << '\n';

    ReverseArray(array, size);
    std::cout << "\nReversed Array: ";
    PrintArray(array, size);

    size = DeleteNegativeNumbersFromArray(array, size);
    std::cout << "Array without negatives: ";
    PrintArray(array, size);

    char order;
    std::cout << "\nSort in ascending order? (y/n): ";
    std::cin >> order;
    bool ascending = (order == 'y' || order == 'Y');
    BubbleSort(array, size, ascending);
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
