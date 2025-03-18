#include <iostream>
#include <cstdint>
#include "header.h"


int main()
{
    setlocale(LC_ALL, "Ru");
    int32_t array[MAX_SIZE], arraySize{}, arrayTarget{};
    InputArraySize(arraySize);
    if (!CheckSize(arraySize))
    {
        std::cout << "Wrong size :c";
    }
    else
    {
        std::cout << "\nInput elements of array: ";
        InputArray(array, arraySize);
        system("cls");
        std::cout << "Your Array: ";
        OutputArray(array, arraySize);
        std::cout << "\n\nInput target element to find: ";
        std::cin >> arrayTarget;
        int32_t result = FindElement(array, arraySize, arrayTarget);
        if (result != -1)
        {
            std::cout << "\nLast found element " << arrayTarget << " is at position: " << result << '\n';
        }
        else
        {
            std::cout << "\nElement " << arrayTarget << " is not found in the array" << '\n';
        }

        int32_t maxIndex = MaxElementIndex(array, arraySize);
        int32_t minIndex = MinElementIndex(array, arraySize);
        int32_t average = CalculateAverage(array[maxIndex], array[minIndex]);

        std::cout << "Максимальный элемент: " << array[maxIndex] << " на позиции: " << maxIndex << std::endl;
        std::cout << "Минимальный элемент: " << array[minIndex] << " на позиции: " << minIndex << std::endl;
        std::cout << "Среднее арифметическое максимального и минимального элементов: " << average << std::endl;

        PrimeNumbers(array, arraySize);
        SwapElementsOfArray(array, arraySize);
        DeleteNegativeNumbersFromArray(array, arraySize);

        bubbleSort(T* array, int32_t arraySize);
        std::cout << "Array had been sorted\n";

        CountElements(Type* array, int32_t arraySize);
        std::cout << "Amount of elements between first and last zeros is: " << CountElements(array, arraySize) << std::endl;
    }
    
    return 0;
}