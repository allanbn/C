#include <stdio.h>

int main() {
	
	int n, pa, pb, i;
	double ca, cb;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d %lf %lf", &pa, &pb, &ca, &cb);
		int count = 0;
		while (pa < pb + 1) {
			pa += pa  * (ca / 100);
			pb += pb * (cb / 100);
			count++;
			if (count > 100) {
				break;
			}
		}
		if (count <= 100) {
		printf("%d anos.\n", count);
		}
		else {
			printf("Mais de 1 seculo.\n");
		}
	}
	return 0;
}