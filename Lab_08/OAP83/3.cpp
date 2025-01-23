#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 5, n = 1, i=0;
	float b, m = 9999;
	for (i; i < count; i++)
	{
		cout << "¬ведите b" << i << endl;
		cin >> b;
		if (b < m)
		{
			m = b;
			n = i;
		}
	}
	cout << "m= " << m << i << endl;
	cout << "n= " << n << i << endl;
}
