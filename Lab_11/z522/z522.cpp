// ���������� � 1� ����� � n ����� ������ �� ������� p.
#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    unsigned int A;
    int p, n;

    std::cout << "������� ����� A: ";
    std::cin >> A;
    std::cout << "������� ������� p: ";
    std::cin >> p;
    std::cout << "������� ���������� ����� n: ";
    std::cin >> n;

    // ������������� n ����� � 1, ������� � ������� p
    unsigned int mask = ((1U << n) - 1) << p; // ������� ����� � n ���������, ���������� �� p �������
    A |= mask; // ������������� ���� � 1 � ����� A

    std::cout << "��������� A: " << A << std::endl;

    return 0;
}