//	������� 5 ����� ����� A, ������� �� ������� � �������� �� � ����� B, ������� � �������� ����.
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    unsigned int A, B;
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;

    // ��������� 5 ����� �� A, ������� �� ������� ����
    unsigned int extractedBits = (A >> 1) & 0x1F; // 0x1F = 0001 1111 � �������� �������������

    // ��������� ����������� ���� � B, ������� � �������� ����
    B = (B & ~(0x1F << 2)) | (extractedBits << 2); // 0x1F << 2 ������� ���� �� 2 ������� �����

    std::cout << "��������� B: " << B << std::endl;

    return 0;
    }