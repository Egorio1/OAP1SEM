#include <iostream>
using namespace std;

int main() {
	int a = 100; 
	bool b = true; 
	while (a < 1000) {
		int dig = a % 10; 
		int ten = (a % 100 - dig) / 10;
		int hun = (a - ten - dig) / 100;
		if (hun< ten && ten < dig && int(sqrt(a)) == sqrt(a)) { 
			for (int i = 2; i < sqrt(a); i++) { 
				if (int(sqrt(a)) % i == 0) { 
					b = false; 
				}
			}
			if (b) { 
				break;
			}
		}
		a++; 
	}
	cout << a << endl;
}