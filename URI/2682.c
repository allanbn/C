#include <stdio.h>

int main() {
	
	int n, a = 0, count = 0;
	
	while (scanf("%d", &n) != EOF) {
		if (count == 0) {
			a = n;
			count++;
		}
		else {
			if (n > a && count == 1) {
				a = n;
			}
			else if (n <= a && count == 1) { 
				count++;
			}
		}
	}
	printf("%d\n", ++a);
	return 0;
}