//1.	��������� ������� �������� ���������, ������ �� ����������� ����� �.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "������� ����� "; cin >> a;
	b = a;
	a = a >> 4;
	a = a << 4;
	if (b == a) {
		cout << "������ 16" << endl;
	}
	else {
		cout << "�� ������ 16 " << endl;
	}
}