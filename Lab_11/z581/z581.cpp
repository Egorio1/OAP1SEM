//1.	Установить в ноль каждый третий значащий бит целого числа А.
#include <iostream>
#include <bitset>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	cout << "Введите число "; cin >> a;
	int mask = 0;
	for (int i = 2; i < sizeof(int) * 8; i+=3) {
		mask |= (1U << i);
	}
	cout << "Исходное число " << a << " (" << bitset<10>(a) << ")" << endl;
	a &= ~mask;
	cout << "Конечное число " << a << " (" << bitset<10>(a) << ")" << endl;
}