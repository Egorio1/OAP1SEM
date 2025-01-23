#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int n, l = -1;
	cout << "Введите количество чисел последовательности "; cin >> n;
	int num[1000];
	cout << "Введите элементы последовательности" << endl;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		if (num[i] < 0) {
			l = i + 1;
		}
	}
	if (l == -1) {
		cout << "Нет отрицательных элементов" << endl;
	}
	else {
		cout << "Порядковый номер элемента " << l << endl;
	}
	return 0;
}