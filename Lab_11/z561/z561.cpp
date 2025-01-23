// Установить в единицу каждый второй значащий бит целого числа А.
#include <iostream>

unsigned int setEverySecondSignificantBit(unsigned int A) {
    unsigned int result = A; // Начинаем с исходного числа
    unsigned int count = 0; // Счетчик значащих битов

    // Проходим по всем битам
    for (int i = 0; i < 32; ++i) {
        // Проверяем, является ли текущий бит значащим (1)
        if (A & (1U << i)) {
            count++; // Увеличиваем счетчик значащих битов
            // Если это второй значащий бит, устанавливаем его в 1
            if (count % 2 == 0) {
                result |= (1U << i); // Устанавливаем бит в 1
            }
        }
    }

    return result;
}

int main() {
    unsigned int A;
    setlocale(LC_ALL, "RU");
    std::cout << "Введите число A: ";
    std::cin >> A;

    unsigned int result = setEverySecondSignificantBit(A);

    std::cout << "Результат: " << result << std::endl;

    return 0;
}