//2.	���������� � 0 n ����� � ����� � ����� �� ������� p, �������� ��� m ����� ����� �, ������� � ������� q.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU"); 
	int a, b, m, q;
	int sum = 0;
	cout << "������� ����� "; cin >> b;
	cout << "������� ����� ����� �� �������: "; cin >> q;
	cout << "m = "; cin >> m;
	for (int i = 0; i < q; i++) {
		sum += pow(2, i);
	}
	a = b;
	a = a & sum;
	b = b >> q + m;
	b = b << q + m;
	b = b | a;
	cout << "�������� �����: " << b;
}
