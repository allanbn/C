#include <stdio.h>

void xorSwap(int *x, int *y)
{
	if (x != y)
	{
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;
	}
}

int main()
{
	int x = 8;
	int y = 3;
	printf("Init\n");
	printf("x: %d and y: %d\n", x, y);
	xorSwap(&x, &y);
	printf("Swapping\n");
	printf("x: %d and y: %d\n", x, y);
	return 0;
}