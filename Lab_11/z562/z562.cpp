// Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m.
#include <iostream>
using namespace std;

// Функция для извлечения 3 бит из числа A, начиная с позиции n
unsigned int extractBits(unsigned int A, int n) {
    return (A >> n) & 7; // 7 = 0b111, маска для 3 бит
}

// Функция для вставки 3 бит в число B, начиная с позиции m
unsigned int insertBits(unsigned int B, unsigned int extractedBits, int m) {
    // Очистить 3 бита в B, начиная с позиции m
    unsigned int mask = ~(7 << m);  // Маска для очистки 3 бит
    B &= mask;  // Очистить биты в B

    // Вставить извлечённые биты в B на позицию m
    B |= (extractedBits << m);  // Сдвигаем extractedBits на m позиций и вставляем в B
    return B;
}

int main() {
    unsigned int A, B;
    int n, m;
    setlocale(LC_ALL, "RU");

    // Ввод чисел A, B и позиций n и m
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;
    cout << "Введите позицию n (для извлечения 3 бит из A): ";
    cin >> n;
    cout << "Введите позицию m (для вставки в B): ";
    cin >> m;

    // Извлечь 3 бита из числа A, начиная с позиции n
    unsigned int extractedBits = extractBits(A, n);

    // Вставить извлечённые биты в число B, начиная с позиции m
    B = insertBits(B, extractedBits, m);

    // Вывести результат
    cout << "Результат: " << B << endl;

    return 0;
}
