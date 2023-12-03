// Стандартні нудні команди

#include <iostream>
using namespace std;

int main()
{
    // Введення кирилиці
    setlocale(0, ".1251");

    // Оголошення змінних
    int n;

    // Введення розміру масиву
    cout << "Введіть розмір масиву: ";
    cin >> n;

    // Створення масиву розміром n
    int arr[100]; // Максимальний розмір масиву (змініть за потребою)

    // Введення елементів масиву
    cout << "Введіть елементи масиву:\n";

    for (int i = 0; i < n; ++i)
    {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Обчислення добутку елементів з парними номерами
    int product = 1;

    for (int i = 1; i < n; i += 2)
    {
        product *= arr[i];
    }

    // Знаходження індексів першого і останнього нульових елементів
    int firstZeroIndex = -1;
    int lastZeroIndex = -1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            firstZeroIndex = i;
        }
    }

    // Сума елементів масиву між першим і останнім нульовими елементами
    int sumBetweenZeros = 0;

    if (firstZeroIndex != -1 && lastZeroIndex != -1)
    {
        for (int i = firstZeroIndex + 1; i < lastZeroIndex; ++i)
        {
            sumBetweenZeros += arr[i];
        }
    }

    // Перетворення масиву: спочатку додатні, потім від'ємні
    int transformedArray[100]; // Максимальний розмір масиву (змініть за потребою)
    int positiveIndex = 0;
    int negativeIndex = n; // Починаємо з кінця масиву

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            transformedArray[positiveIndex++] = arr[i];
        }
        else
        {
            transformedArray[--negativeIndex] = arr[i];
        }
    }

    // Виведення результатів
    cout << "Добуток елементів з парними номерами: " << product << endl;

    cout << "Сума елементів між першим і останнім нульовими елементами: " << sumBetweenZeros << endl;

    cout << "Масив після перетворення: ";
    for (int i = 0; i < n; ++i)
    {
        cout << transformedArray[i] << " ";
    }
    cout << std::endl;

    return 0;
}