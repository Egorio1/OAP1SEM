#include <iostream>
#include <cmath>
using namespace std;
// функция x*x+1/x
int main() {
	setlocale(LC_ALL, "ru");
	double a = 1; double b = 4; int n = 200;
	double x, h; double s;
	h = (b - a) / n;
	x = a; s = 0;
	while (x < (b - h)) {
		s = s + h * ((x * x + 1 / x) + ((x + h) * (x + h))) / 2;
		x = x + h;
	}
	cout << "Метод трапеции " << s << endl;
	double ap = 1; double bp = 4; int np = 200;
	double xp, hp; double sp;
	hp = (bp - ap) / (2 * np);
	xp = ap + 2 * hp; double s1 = 0; double s2 = 0; int i = 1;
	while (i > n) {
		s2 = s2 + (xp * xp + 1 / xp);
		xp = xp + hp;
		i++;
}
	while (i > n) {
		s1 = s1 + (xp * xp + 1 / xp);
		xp = x + h; i++;
	}
	sp = hp / 3 * ((ap * ap + 1 / ap) + 4 * ((ap + hp) * (ap + hp)) + 4 * s1 + 2 * s2 + (b * b + 1 / b));
	cout << "Метод параболы " << sp << endl;
	cout << "Разница значений " << sp - s;
}
