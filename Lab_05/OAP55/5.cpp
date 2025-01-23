#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	int k;
	cout << "Введите возраст от 1 до 9 "; cin >> k;
	if (k == 1)
	{ cout << "Мне " << k << " Год"; }
	
	if ( k>=2 && k<=4) {
		cout << "Мне " << k << " Года"; 
	} 
	if (k>= 5 && k<=9) {
		cout << "Мне " << k << " Лет"; 
	}
}