#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double n, s, p, sum, r;
    cout << "���������� ���: ";
    cin >> n;
    cout << "��������� ���������: ";
    cin >> s;
    cout << "������ ��������� � ���: ";
    cin >> p;
    r = 1;
    sum = s;
    while ( r < n ) {
        sum = s +(sum - (sum * p));
        r++;
    }
    cout << "�������� ��������� ����� ������������ = " << sum << endl;
    return 0;
}