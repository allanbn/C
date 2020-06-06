#include <stdio.h>


int main() {
	
	int n, i, c;
	while (1) {
		int array[10001];
		c = 0;
		scanf("%d", &n);
		if (!n) break;
		for (i = 0; i < n; i++) {
			scanf("%d", &array[i]);
		}
		int ant, suc;
		for (i = 0; i < n; i++) {
			ant = i - 1; suc = i + 1;
			if (i == 0) ant = n - 1;
			else if (i == n - 1) suc = 0;
			if ((array[i] > array[ant] && array[i] > array[suc]) 
				|| (array[i] < array[ant] && array[i] < array[suc])) c++;
		}
		printf("%d\n", c);
	} 
	return 0;
}