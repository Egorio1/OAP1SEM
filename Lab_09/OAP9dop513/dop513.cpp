#include <iostream>
#include <cmath>
using namespace std;
// функция x*x*x+2
int main() {
	setlocale(LC_ALL, "ru");
	double a = 8; double b = 14; int n = 200;
	double x, h; double s;
	h = (b - a) / n;
	x = a; s = 0;
	while (x < (b - h)) {
		s = s + h * ((x * x * x + 2) + ((x + h) * (x + h) * (x + h) + 2))/2 ;
		x = x + h;
	}
	cout << "Метод трапеции " << s << endl;
	double ap = 8; double bp = 14; int np = 200;
	double xp, hp; double sp;
	hp = (bp - ap) / (2 * np);
	xp = ap + 2 * hp; double s1 = 0; double s2 = 0; int i = 1;
	while (i > n) {
		s2 = s2 + (xp * xp*xp + 2);
		xp = xp + hp;
		i++;
	}
	while (i < n) {
		s1 = s1 + (xp * xp*xp + 2);
		xp = x + h; i++;
	}
	sp = hp / 3 * ((ap * ap + ap + 2) + 4 * ((ap + hp) * (ap + hp)*(ap + hp)+2) + 4 * s1 + 2 * s2 + (bp * bp * bp+ 2));
	cout << "Метод параболы " << sp << endl;
	cout << "Разница значений " << sp - s;
}