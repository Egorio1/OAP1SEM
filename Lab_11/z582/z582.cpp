//2.	Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, b, m, n = 3;
	int sum = 0;
	cout << "Введите число "; cin >> b;
	cout << "С позиции: "; cin >> m;
	for (int i = 0; i < m; i++) {
		sum += pow(2, i);
	}
	a = b;
	a = a & sum;
	b = b >> m + n;
	b = b << m + n;
	b = b | a;
	cout << "Конечное число: " << b;
}
