// ���������� � ������� ������ ������ �������� ��� ������ ����� �.
#include <iostream>

unsigned int setEverySecondSignificantBit(unsigned int A) {
    unsigned int result = A; // �������� � ��������� �����
    unsigned int count = 0; // ������� �������� �����

    // �������� �� ���� �����
    for (int i = 0; i < 32; ++i) {
        // ���������, �������� �� ������� ��� �������� (1)
        if (A & (1U << i)) {
            count++; // ����������� ������� �������� �����
            // ���� ��� ������ �������� ���, ������������� ��� � 1
            if (count % 2 == 0) {
                result |= (1U << i); // ������������� ��� � 1
            }
        }
    }

    return result;
}

int main() {
    unsigned int A;
    setlocale(LC_ALL, "RU");
    std::cout << "������� ����� A: ";
    std::cin >> A;

    unsigned int result = setEverySecondSignificantBit(A);

    std::cout << "���������: " << result << std::endl;

    return 0;
}