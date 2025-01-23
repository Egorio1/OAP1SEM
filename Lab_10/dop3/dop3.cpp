#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int maxsize = 99;
	int obsh = 0;
	int arr[maxsize];
	int ch = 0;
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
			if (arr[i] >= ch) {
				ch = arr[i];
			}
		}
	}
	cout <<"Наибольшее число подряд идущих одинаковых элементов " << ch;
	return 0;
}