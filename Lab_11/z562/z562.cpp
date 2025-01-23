// ������� 3 ���� ����� �, ������� � ������� n, � �������� � ����� �, ������� � ������� m.
#include <iostream>
using namespace std;

// ������� ��� ���������� 3 ��� �� ����� A, ������� � ������� n
unsigned int extractBits(unsigned int A, int n) {
    return (A >> n) & 7; // 7 = 0b111, ����� ��� 3 ���
}

// ������� ��� ������� 3 ��� � ����� B, ������� � ������� m
unsigned int insertBits(unsigned int B, unsigned int extractedBits, int m) {
    // �������� 3 ���� � B, ������� � ������� m
    unsigned int mask = ~(7 << m);  // ����� ��� ������� 3 ���
    B &= mask;  // �������� ���� � B

    // �������� ����������� ���� � B �� ������� m
    B |= (extractedBits << m);  // �������� extractedBits �� m ������� � ��������� � B
    return B;
}

int main() {
    unsigned int A, B;
    int n, m;
    setlocale(LC_ALL, "RU");

    // ���� ����� A, B � ������� n � m
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;
    cout << "������� ������� n (��� ���������� 3 ��� �� A): ";
    cin >> n;
    cout << "������� ������� m (��� ������� � B): ";
    cin >> m;

    // ������� 3 ���� �� ����� A, ������� � ������� n
    unsigned int extractedBits = extractBits(A, n);

    // �������� ����������� ���� � ����� B, ������� � ������� m
    B = insertBits(B, extractedBits, m);

    // ������� ���������
    cout << "���������: " << B << endl;

    return 0;
}
