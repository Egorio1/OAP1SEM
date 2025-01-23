#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	double a, m, w, r, j[3]{ 0.5, 9.1, 5 };

	a = -1.4; m = 16; 
	for (int n = 0; n < size(j); n++) {
		w = tan(a / 3) + exp(a/m);
		r = 0.9 * sqrt(w + j[n]) + abs(a * a + 1);
		cout << "w = " << w << "\n";
		cout << "r = " << r << "\n";
	}

}
