#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, k, mn, mx;
	cout << "¬ведите x "; cin >> x;
	cout << "¬ведите y "; cin >> y;
	cout << "¬ведите z "; cin >> z;
	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	k = mx * mn;
	cout << "max(x + y + z, xyz) * min(x, y, z) = " << k; 
}
