#include <iostream>
#include <cmath>
// функция 2-x*x+x
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a = -1000;
	double b = 1000;
	double e = 0.0001;
	double x = (a + b) / 2;
	if ((2 - x * x + x) * (2 - a * a + a) <= 0) {
		b = x;
	}
	else {
		a = x;
	}
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((2 - x * x + x) * (2 - a * a + a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x << endl;
}