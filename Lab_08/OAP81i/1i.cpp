#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	float a, fac = 1; int i;
	cin >> a;
	for (i = 1; i <= a; i++) {
		fac = fac * i;
	}
	cout << "Факториал a = " << fac;
}