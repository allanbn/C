#include <stdio.h>

int main() {
	
	int n, count = 1, count1 = 0, guarda, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if (i == 0){
			guarda = x;
		}
		else {
			if (x == guarda) {
				count++;
			}
			else {
				guarda = x;	
				count = 1;
			}
		}
		if (count > count1) {
			count1 = count;
		}
	}
	printf("%d\n", count1);
	return 0;
}