#include <stdio.h>

int main()
{
	unsigned char x = 5; // 00000101
	unsigned char v = 2; // 00000010
	printf("v: %d\n", v);
	printf("v one bit shift to the left: %d\n", (v << 1)); // 00000100
	printf("v one bit shift to the right: %d\n", (v >> 1)); // 00000001
	printf("v+x: %d\n", (v | x)); // 00000010 + 00000101 == 00000111
	printf("signed inverted v: %d\n", ~v); // sign bit: 1, 11111101
	printf("unsigned inverted y: %d\n", (unsigned char) ~v); // sign bit: 0, 11111101
	printf((x & 1) ? "Odd\n" : "Even\n");
	printf((v & 1) ? "Odd\n" : "Even\n");
	return 0;
}