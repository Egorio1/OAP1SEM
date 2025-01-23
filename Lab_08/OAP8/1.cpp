#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float a, sum = 0; int i;
	const int size = 4;
	for (i = 0; i < size; i++) {
		cout << "a= " << i << endl;
		cin >> a;
		sum = sum + a;

	}
	cout << "Summa " << sum << endl;
}