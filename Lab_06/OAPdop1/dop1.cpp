#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
    double p, q, n, s;
    cout << "������� �� 1 ����: ";
    cin >> p;
    cout << "������� �� �������� ����: ";
    cin >> q;
    n = 1;
    s = p;
    while (s < q) {
        s = s + (s * 0.03);
        n++;
    }
    cout << "���� = " << n << endl;
    return 0;
}