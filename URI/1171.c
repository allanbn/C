#include <stdio.h>

int main() {
	int n, num;
	scanf("%d", &n);
	int array[n], i;
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		array[i] = num;
	}
	int pos, pos2, troca;
	for (i = 0; i < n; i++) {
		pos = i;
		for (pos2 = i + 1; pos2 < n; pos2++) {
			if (array[pos] > array[pos2]) {
				pos = pos2;
			}
		}
		if (pos != i) {
			troca = array[i];
			array[i] = array[pos];
			array[pos] = troca;
		}
	}
	int valorant, cont, j, val;
	for (i = 0; i < n; i++) {
		cont = 0;
		val = array[i];
		if (i == 0) {
			valorant = array[i];
		}
		else if (valorant == array[i]) continue;
		for (j = 0; j < n; j++) {
			if (val == array[j]) cont++;
		}
		printf("%d aparece %d vez(es)\n", array[i], cont);
		valorant = array[i];
	}
    return 0;
}