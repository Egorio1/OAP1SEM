#include <stdio.h>
#include <cmath>

void main()
{
	float z, y, x = 3;
	do
	{
		z = 2 * pow(x, 2);
		y = z + pow(x, (float)1 / 3);
		printf("x=%5.2f\t", x);
		printf("y=%5.2f\n", y);
		x = x + 0.1;
	} while (x < 4.1);
}
