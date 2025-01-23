// Установить в 1в числе А n битов вправо от позиции p.
#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    unsigned int A;
    int p, n;

    std::cout << "Введите число A: ";
    std::cin >> A;
    std::cout << "Введите позицию p: ";
    std::cin >> p;
    std::cout << "Введите количество битов n: ";
    std::cin >> n;

    // Устанавливаем n битов в 1, начиная с позиции p
    unsigned int mask = ((1U << n) - 1) << p; // Создаем маску с n единицами, сдвинутыми на p позиций
    A |= mask; // Устанавливаем биты в 1 в числе A

    std::cout << "Результат A: " << A << std::endl;

    return 0;
}