#include <iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	int ned;
	int ined = 0;
	int osned = 0;
	const int maxsize = 99;
	int osadki[maxsize];
	srand((unsigned)time(NULL));
	cout << "������� ���������� ������ "; cin >> ned;
	for (int i = 1; i <= ned; i++) {
		for (int j = 1; j <= 7; j++) {
			osadki[j] = rand() % 10;
			osadki[i] = osadki[i] + osadki[j];
		}
		cout << "������ �� " << i << " ������: " << osadki[i] << endl;
		if (osned <= osadki[i]) {
			osned = osadki[i];
			ined = i;
		}
	}
	cout << "���������� ���������� ������� �� " << ined << " ������: " << osned << endl;
}