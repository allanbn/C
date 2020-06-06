#include <stdio.h>

int main() {
	
	int i, j, n, x;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		int count = 0;
		for (j = 1; j <= x; j++) {
			if (x % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			printf("%d eh primo\n", x);			
		}
		else {
			printf("%d nao eh primo\n", x);
		}
	}	
	return 0;
}