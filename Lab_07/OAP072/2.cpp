#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main() {
	double a = -4.2, d; int i = 4, f; double  t[5]{ 5, 1, -3, 9, 1 };
	for (int z = 0; z < size(t); z++) {
		d = i + 2 * t[z] * (1 + sqrt(3 * a * a));
		cout << "d = " << d << endl;
		if (d >= t[z] * (t[z] + 1)) {
			f = t[z] * i;
			cout << "f = " << f << endl;
		}
		else if (d < t[z] * (t[z] + 1)) {
			f = exp(t[z] - d) + 9;
			cout << "f = " << f << endl;

		}
	}
}