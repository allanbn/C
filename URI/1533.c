#include <stdio.h>
#include <string.h>

int main() {
    int n, a, i, maior, menor, culpado;
    while (1) {
        scanf("%d", &n);
		if (!n) {
			break;
		}
		culpado = 0;        
        maior = 0;
        menor = 0;
        int array[n];
        memset(array, 0, n*sizeof(int));        
        for (i = 0; i < n; i++) {
            scanf("%d", &a);          
            array[i] = a;
        }
        for (i = 0; i < n; i++) {
            if (i == 0) {
                maior = array[i];
            }
            else if (maior < array[i]) {
				menor = maior;                    
				maior = array[i];          
			}
			else if (menor < array[i] && array[i] < maior) {
				menor = array[i];
			}
        }
        for (i = 0; i < n; i++) {
            if (menor == array[i]) {
                culpado = i + 1;
            }
        }        
        printf("%d\n", culpado);
    } 
    return 0;
}