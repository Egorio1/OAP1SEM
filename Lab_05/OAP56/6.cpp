#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	int k;
	puts("Как у вас дела?(1-Сойдет, 2-Круто, 3-Плохо)");
		cin >> k;
		switch (k)
		{
		case 1: {
			puts("Как прошел день?(1-Как обычно, 2-Суперски, 3-Плохо) ");
			cin >> k;
			switch (k)
			{
			case 1: puts("Пон"); break;
			case 2: puts("Круто"); break;
			case 3: puts(":(");
				break;
			}
			break;
		}
		case 2: puts("Жизнь удалась"); break;
		default: puts("Жаль"); break;
		}
		return 0;
}