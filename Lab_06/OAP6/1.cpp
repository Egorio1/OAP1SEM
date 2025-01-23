#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float z, y, x, sd;
	sd = 1.0 / 3.0;
	for (int n = 0; n < 4; n++)
	{
		printf("¬ведите x ");
		scanf_s("%f", &x);
		z = 2 * pow(x, 2);
		y = z + pow(x, sd);
		printf("x = %5.2f\t", x);
		printf("y = %5.2f\n", y);
	}
}
