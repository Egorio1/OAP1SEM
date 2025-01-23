#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int f, z = 0, a = 10;
	cin >> f;
for (a; a < 100; a++) {
		if (f == a / 10 + a % 10) {
			z++;
		}
		
	}
cout << "Количество " << z;