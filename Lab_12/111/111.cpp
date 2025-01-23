// Вводится последовательность из n натуральных чисел. Определить наименьшее натуральное число, отсутствующее в последовательности.
#include <iostream>
#include <algorithm>
using namespace std;
int removenumber(int*arr, int n) {
	sort(arr, arr + n);
	int remnumber = 1;
	for (int i = 0; i < n; i++) {
		if (remnumber == arr[i]) {
			remnumber++;
		}
		else if (arr[i] > remnumber) {
			break;
		}
	}
	return remnumber;
}
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите размер массива "; cin >> n;
	int* arr = new int[n];
	cout << "Введите числа ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int misnumber = removenumber(arr, n);
	cout << "Наименьшее отсутствующее число: " << misnumber << endl;
	delete[]arr;
}