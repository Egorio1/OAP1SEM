#include <iostream>
using namespace std;
int main() {
	int x, y, z, max, min;
	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	cout << "z= "; cin >> z;
	max = x;
	if (y > x) {
		max = y;
	}
	if (z > y) {
		max = z;
	}
	min = x*y;
	if (y * z < x * y) {
		min = y*z;
	}
	if (z * x < y * z) {
		min = z*x;
	}
	cout << "Max(x/y/z)*Min(xy/yz/zx) = " << max * min;
}
