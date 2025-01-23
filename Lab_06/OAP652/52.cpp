#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	double a = -1.4, m = 16, r, w, j = 1.8;
	do {
		w = tan(a / 3) + exp(a / m);
		r = 0.9 * sqrt(w + j) + abs(a * a + 1);
		cout << "w = " << w << "\n";
		cout << "r = " << r << "\n"; 
		j += 0.2;
	} while (j < 3);
	

}

