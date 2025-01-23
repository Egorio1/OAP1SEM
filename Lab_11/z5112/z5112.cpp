//2.	Установить в 0 n битов в числе А влево от позиции p, заменить ими m битов числа В, начиная с позиции q.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU"); 
	int a, b, m, q;
	int sum = 0;
	cout << "Введите число "; cin >> b;
	cout << "Введите сдвиг влево от позиции: "; cin >> q;
	cout << "m = "; cin >> m;
	for (int i = 0; i < q; i++) {
		sum += pow(2, i);
	}
	a = b;
	a = a & sum;
	b = b >> q + m;
	b = b << q + m;
	b = b | a;
	cout << "Конечное число: " << b;
}
