#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	const int N = 100;
	int i, a = 0, sz, A[N], rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив A: " << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++) {
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
		a += A[i];
	}
	cout << "Сумма массива " << a;
}
