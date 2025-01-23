#include <iostream>
#include <cmath>
using namespace std;
// функция 5 - x*x
int main() {
	setlocale(LC_ALL, "ru");
	double a = 8; double b = 12; int n = 200;
	double x, h; double s;
	h = (b - a) / n;
	x = a; s = 0;
	while (x < (b - h)) {
		s = s + h * ((5-x*x) + (5 - (x + h) * (x + h) + 2)) / 2;
		x = x + h;
	}
	cout << "Метод трапеции " << s << endl;
	double ap = 8; double bp = 12; int np = 200;
	double xp, hp; double sp;
	hp = (bp - ap) / (2 * np);
	xp = ap + 2 * hp; double s1 = 0; double s2 = 0; int i = 1;
	while (i > n) {
		s2 = s2 + (5 - xp * xp);
		xp = xp + hp;
		i++;
	}
	while (i < n) {
		s1 = s1 + (5 - xp * xp);
		xp = x + h; i++;
	}
	sp = hp / 3 * ((5 - ap * ap) + 4 * (5-(ap + hp) * (ap + hp) ) + 4 * s1 + 2 * s2 + (5 - bp * bp ));
	cout << "Метод параболы " << sp << endl;
	cout << "Разница значений " << sp - s;
}