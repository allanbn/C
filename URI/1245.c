#include <stdio.h>
#include <string.h>

int main() {
    int n;    
    while (scanf("%d", &n) != EOF) {
        int arrayd[31], arraye[31], i, t, pares = 0;
        char p;
        memset(arrayd, 0, 31*sizeof(int));  
        memset(arraye, 0, 31*sizeof(int));
        pares = 0;
        for (i = 0; i < n; i++) {
            scanf("%d %c", &t,&p);
            if (p == 'D') {
                arrayd[t-30] += 1;            
            }
            else {
                arraye[t-30] += 1;            
            }
        }
        for (i = 0; i < 31; i++) {
            if (arrayd[i] > 0 && arraye[i] > 0) {
                if (arrayd[i] == arraye[i]) {
                    pares += arrayd[i];
                }
                else {
                    if (arrayd[i] > arraye[i]) {
                        pares += arraye[i];
                    }
                    else {
                        pares += arrayd[i];
                    }
                }
            }
        }
        printf("%d\n", pares);    
    }
    return 0;
}
