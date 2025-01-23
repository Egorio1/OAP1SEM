#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	double s, a = 5.45, n = 5, y[5]{ 2.1, 7.7, -4.5,9 };
	double q = 4;
	for (int i = 1; i < n; i++) {
		q *= y[i] / (pow(i, 2) + 1);
	}
	s = 2 * a + q * sin(a);
	cout << "s = " << s << endl;
	cout << "q = " << q << endl;
}