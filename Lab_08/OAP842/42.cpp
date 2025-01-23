#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	double y[5]{ 1.3, 1, 0.9,0.5,8 };
	double k = 1;
	double miny = y[0];
	for (int i = 1; i < 5; ++i) {
		if (y[i] < miny) {
			miny = y[i];
		}

		for (int i = 1; i < 5; i++) {
			k *= y[i] + miny;
		}
	}
	cout << "k = " << k << endl;
}