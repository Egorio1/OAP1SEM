#include <locale>
#include <iostream>
void main() {
	setlocale(LC_ALL, "RU");
	using namespace std;
	const int maxSize = 30;
	int n, i, kmax = 0;
	int a[maxSize];
	cout << "Введите размер массива " << endl;
	cin >> n;
	if (n > 30)
		return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 30;
		cout << a[i] << " ";
}
	cout << endl;
	for (i = 1; i < n; i++) {
		if (a[i] < a[kmax])
			kmax = i;
		cout << "Минимальный элемент " << a[kmax] << endl;
	}
}