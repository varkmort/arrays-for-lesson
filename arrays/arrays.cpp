#include <iostream>
#include <iomanip>

void ExArr() {
    // Создаем одномерный массив целых чисел
    int myArray[5];
    // Инициализируем элементы массива
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    // Выводим элементы массива на экран
    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }
    // Можем изменять элементы массива
    myArray[2] = 35;
    // Выводим измененный элемент на экран
    std::cout << "Измененный элемент массива:" << std::endl;
    std::cout << "myArray[2] = " << myArray[2] << std::endl;
    // Рассчитываем сумму всех элементов в массиве
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += myArray[i];
    }
    // Выводим сумму на экран
    std::cout << "Сумма всех элементов в массиве: " << sum << std::endl;

}

void ExMatrix() {
    // Создаем двумерный массив целых чисел (матрицу 3x3)
    int myArray[3][3];
    // Инициализируем элементы массива
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            myArray[i][j] = i * 3 + j + 1;
        }
    }
    // Выводим элементы массива на экран
    std::cout << "Элементы двумерного массива:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "myArray[" << i << "][" << j << "] = " << myArray[i][j] << "   ";
        }
        std::cout << std::endl;
    }
    // Можем изменять элементы массива
    myArray[1][1] = 10;
    // Выводим измененный элемент на экран
    std::cout << "Измененный элемент двумерного массива:" << std::endl;
    std::cout << "myArray[1][1] = " << myArray[1][1] << std::endl;
    // Рассчитываем сумму всех элементов в массиве
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += myArray[i][j];
        }
    }
    // Выводим сумму на экран
    std::cout << "Сумма всех элементов в двумерном массиве: " << sum << std::endl;

}


int main()
{
    // Создаем двумерный массив 8x8 для таблицы умножения
    int multiplicationTable[8][8];

    // Заполняем массив значениями таблицы умножения
    for (int i = 2; i <= 9; i++) {
        for (int j = 2; j <= 9; j++) {
            multiplicationTable[i - 2][j - 2] = i * j;
        }
    }

    // Выводим шапку таблицы
    std::cout << " x |";
    for (int i = 2; i <= 9; i++) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;
    std::cout << "---+";
    for (int i = 2; i <= 9; i++) {
        std::cout << "----";
    }
    std::cout << std::endl;

    // Выводим содержимое таблицы
    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(2) << i + 2 << " |";
        for (int j = 0; j < 8; j++) {
            std::cout << std::setw(4) << multiplicationTable[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}