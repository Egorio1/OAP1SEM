#include <iostream>
#include <cmath>
// функция e^x + x ? 4
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a = -1000;
	double b = 1000;
	double e = 0.0001;
	double x = (a + b) / 2;
	if ((exp(x) + x-4) * (exp(a) + a - 4) <= 0) {
		b = x;
	}
	else {
		a = x;
	}
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((exp(x) + x - 4) * (exp(a) + a - 4) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x << endl;
}