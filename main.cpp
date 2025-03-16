#include <iostream>
#include <cstdint>

void InputArraySize(int32_t&);
bool CheckSize(int32_t);
const int32_t MAX_SIZE{ 1000 };
void InputArray(int32_t*, int32_t);
void OutputArray(int32_t*, int32_t);
int32_t FindElement(int32_t*, int32_t, int32_t);
int32_t MaxElementIndex(const int32_t arr[], int32_t size);
int32_t MinElementIndex(const int32_t arr[], int32_t size);
int32_t CalculateAverage(int32_t maxElement, int32_t minElement);
void PrimeNumbers(const int32_t arr[], int32_t size);
int32_t isPrime(int32_t num);  

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
            std::cout << "\nLast found element " << arrayTarget << " is at position: " << result;
        }
        else
        {
            std::cout << "\nElement " << arrayTarget << " is not found in the array";
        }
    }

    int32_t maxIndex = MaxElementIndex(array, arraySize);
    int32_t minIndex = MinElementIndex(array, arraySize);
    int32_t average = CalculateAverage(array[maxIndex], array[minIndex]);

    std::cout << "Максимальный элемент: " << array[maxIndex] << " на позиции: " << maxIndex << std::endl;
    std::cout << "Минимальный элемент: " << array[minIndex] << " на позиции: " << minIndex << std::endl;
    std::cout << "Среднее арифметическое максимального и минимального элементов: " << average << std::endl;

    PrimeNumbers(array, arraySize);

    return 0;
}

void InputArraySize(int32_t& arraySize)
{
    std::cout << "Input size of array: ";
    std::cin >> arraySize;
}

bool CheckSize(int32_t arraySize)
{
    return arraySize > 0 && arraySize < MAX_SIZE;
}

void InputArray(int32_t* array, int32_t arraySize)
{
    for (size_t i{}; i < arraySize; ++i)
    {
        std::cin >> array[i];
    }
}

void OutputArray(int32_t* array, int32_t arraySize)
{
    for (size_t i{}; i < arraySize; ++i)
    {
        std::cout << array[i] << ' ';
    }
}

int32_t FindElement(int32_t* array, int32_t arraySize, int32_t arrayTarget)
{
    int32_t position = -1;
    for (int32_t i = 0; i < arraySize; ++i)
    {
        if (array[i] == arrayTarget)
        {
            position = i + 1;
        }
    }
    return position;
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