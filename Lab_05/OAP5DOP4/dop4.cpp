#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int r, q, p;
	cout << "Радиус = "; cin >> r;
	cout << "1 диагональ "; cin >> p;
	cout << "2 диагональ "; cin >> q;
	if (r <= q * p / (2 * sqrt(q * q + p * p))) {
		cout << "Пройдет";
	}
	else {
		cout << "Не пройдет";
	}
	
}