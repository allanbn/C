#include <stdio.h>

int main() {
	
	int n, i, x, y, soma, count;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		soma = 0;
		count = 0;
		while (count < y) {
			if (x % 2 == 1 || x % 2 == -1) {
				soma += x;
				x += 2;
				count++;
			}
			else {
				x += 1;
			}
		}
		printf("%d\n", soma);
	}
	return 0;
}