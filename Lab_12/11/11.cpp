//1.	Вводится последовательность из n натуральных чисел. Определить наименьшее натуральное число, отсутствующее в последовательности.
#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;
void extractdigits(int m, int N, int& size, int*& arr) {
	int absN = abs(N);
	size = 0;
	int temp = absN;
	while (temp > 0) {
		int digit = temp % 10;
		if (digit % m == 0) {
			size++;
		}
		temp /= 10;
	}
		arr = new int[size];
		int index = size - 1;
		while (absN > 0) {
			int digit = absN % 10;
			if (digit % m == 0) {
				arr[index--] = digit;
			}
			absN /= 10;
		}
	}

int main() {
	setlocale(LC_ALL, "RU");
	int m, N;  int size = 0;
	int* arr= nullptr;
	cout << "Введите целое число N: "; cin >> N;
	cout << "Введите число m: "; cin >> m;
	extractdigits(m, N, size, arr);
	if (size > 0) {
		cout << "Цифры числа N кратные m: ";
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "В числе N нету чисел кратных m" << endl;
	}
	delete[] arr;
	return 0;
}