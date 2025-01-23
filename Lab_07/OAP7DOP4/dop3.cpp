#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int c1, c2, c3, c4, i = 0;
	cout << "c1 "; cin >> c1;
	cout << "c2 "; cin >> c2;
	for (i; i <= 12; i++) {
		c2 += c1 / 2;
		c1 /= 2;
		c1 += c2 / 2;
		c2 /= 2;
	}
	cout << c1 << endl;
	cout << c2 << endl;
}