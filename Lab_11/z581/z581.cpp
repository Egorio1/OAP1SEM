//1.	���������� � ���� ������ ������ �������� ��� ������ ����� �.
#include <iostream>
#include <bitset>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	cout << "������� ����� "; cin >> a;
	int mask = 0;
	for (int i = 2; i < sizeof(int) * 8; i+=3) {
		mask |= (1U << i);
	}
	cout << "�������� ����� " << a << " (" << bitset<10>(a) << ")" << endl;
	a &= ~mask;
	cout << "�������� ����� " << a << " (" << bitset<10>(a) << ")" << endl;
}