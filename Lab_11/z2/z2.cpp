#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A = 150; char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << " Число А: " << tmp << endl;
	_itoa_s(0x24, tmp, 2);
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A | 0x24, tmp, 2);
	cout << " Результат: " << tmp << endl << endl;
}
