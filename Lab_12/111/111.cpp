// �������� ������������������ �� n ����������� �����. ���������� ���������� ����������� �����, ������������� � ������������������.
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
	cout << "������� ������ ������� "; cin >> n;
	int* arr = new int[n];
	cout << "������� ����� ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int misnumber = removenumber(arr, n);
	cout << "���������� ������������� �����: " << misnumber << endl;
	delete[]arr;
}