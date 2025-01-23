#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "RU");
	const int maxsize = 99;
	int n, i, nch = 0; double z = 0; int k = 0;
	int a[maxsize];
	cout << "¬ведите размер массива "; cin >> n;
	if (n > 99)
		return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 99;
	}
	for (i = 0; i < n; i++) {
		if (z = a[i] % 2) {
			if (k < 5) {
				a[i] = 0;
				nch++; k++;
			}
			else {
				cout << a[i] << endl;
			}
		}
		else {
			cout << a[i] << endl;
		}
	}
	for (i = 0; i < 3; i++) {
		cout << "0" << endl;
	}
}