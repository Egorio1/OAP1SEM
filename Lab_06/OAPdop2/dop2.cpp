#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double n, s, p, sum, r;
    cout << "Количество лет: ";
    cin >> n;
    cout << "Начальная стоимость: ";
    cin >> s;
    cout << "Потеря стоимости в год: ";
    cin >> p;
    r = 1;
    sum = s;
    while ( r < n ) {
        sum = s +(sum - (sum * p));
        r++;
    }
    cout << "Конечная стоимость всего оборудования = " << sum << endl;
    return 0;
}