//	Извлечь 5 битов числа A, начиная со второго и вставить их в число B, начиная с третьего бита.
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    unsigned int A, B;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    // Извлекаем 5 битов из A, начиная со второго бита
    unsigned int extractedBits = (A >> 1) & 0x1F; // 0x1F = 0001 1111 в двоичном представлении

    // Вставляем извлеченные биты в B, начиная с третьего бита
    B = (B & ~(0x1F << 2)) | (extractedBits << 2); // 0x1F << 2 смещает биты на 2 позиции влево

    std::cout << "Результат B: " << B << std::endl;

    return 0;
    }