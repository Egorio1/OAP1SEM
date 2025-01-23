#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int b,a, sum = 0;
	cout << "¬ведите конечное число последовательности "; cin >> a;
	cout << "¬ведите конечное число последовательности "; cin >> b;
	for (b; b <= a; b++) {
		if (b % 2 == 0 ) {
			sum = sum + b;
		}
	}
	cout << sum;
}