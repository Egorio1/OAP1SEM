//2.	������� 3 ���� ����� �, ������� � ������� n, � �������� � ����� �, ������� � ������� m.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, b, m, n = 3;
	int sum = 0;
	cout << "������� ����� "; cin >> b;
	cout << "� �������: "; cin >> m;
	for (int i = 0; i < m; i++) {
		sum += pow(2, i);
	}
	a = b;
	a = a & sum;
	b = b >> m + n;
	b = b << m + n;
	b = b | a;
	cout << "�������� �����: " << b;
}
