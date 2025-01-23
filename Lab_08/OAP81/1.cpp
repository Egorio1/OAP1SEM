#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	float a, sum = 0; int i;
	const int size = 4;
	for (i = 0; i < size; i++) {
		cout << "a = ";
		cin >> a;
		sum = sum + a*a;

	}
	cout << "Summa " << sum;
}