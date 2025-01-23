#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int a, b, c, r, s, t;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	if (a <= r && b <= s && c << t) {
		cout << "Влезет";
	}
	else
	{
		cout << "Не влезет";
	}
}