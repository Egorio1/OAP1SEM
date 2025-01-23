//1.	Используя битовые операции проверить, кратно ли шестнадцати число А.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите число "; cin >> a;
	b = a;
	a = a >> 4;
	a = a << 4;
	if (b == a) {
		cout << "Кратно 16" << endl;
	}
	else {
		cout << "Не кратно 16 " << endl;
	}
}