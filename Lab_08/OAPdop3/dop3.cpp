#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int n;
	double num[1000];
	double min = num[0];
	double max = num[0];
	int mini = 0;
	int maxi = 0;
	cout << "Введите количество чисел последовательности "; cin >> n;
	
	cout << "Введите элементы последовательности" << endl;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 1; i < n; i++) {
		if (num[i] < min) {
			min = num[i];
			mini = i;
		}
		if (num[i] > max) {
			max = num[i];
			maxi = i;
		}
	}
	int c = 0;
	if (mini > maxi) {
		swap(mini, maxi);
	}
	c = maxi - mini - 1;
	cout << "Количество элементов: " << c << endl;
}