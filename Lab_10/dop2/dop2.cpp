#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int maxsize = 99;
	int obsh = 0;
	int arr[maxsize];
	srand((unsigned)time(NULL));
	int k;
	cout << "Введите размер массива: "; cin >> k;
	for (int i = 1; i <= k; i++) {
		arr[i] = rand() % 9;
		cout << arr[i] << endl;
	}
	for (int i = 1; i <= k; i++) {
		if (arr[i] == arr[i - 1]) {
			obsh++;
		}
	}
	cout << "Количесвто пар соседних элементов массива: " << obsh;
	return 0;
}