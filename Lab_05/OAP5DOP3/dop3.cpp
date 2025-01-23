#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	int a, b, q, p, r, s;
	cout << "a ="; cin >> a;
	cout << "b ="; cin >> b;
	cout << "q ="; cin >> q;
	cout << "p ="; cin >> p;
	cout << "r ="; cin >> r;
	cout << "s ="; cin >> s;
	(q * p and r * s <= a * b) ? cout << "Да" : cout << "Нет";
}