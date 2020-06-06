#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char palavra[51];
    int pos;
    // struct palavra *proximo;
}palavra;


int cmp(const void *a, const void *b) {
    palavra *p1 = (palavra*) a;
    palavra *p2 = (palavra*) b;

    int sp1 = strlen(p1->palavra);
    int sp2 = strlen(p2->palavra);

    if (sp1 > sp2) {
        return -1;
    }
    else if (sp1 < sp2) {
        return 1;
    }
    else {
        return (p1->pos - p2->pos);
    }
}

palavra lul[51];

int main() {
    
    int N;
    scanf("%d", &N);
    getchar();
    char frase[3000];
    int i;
    int cont;
    int aux = 0;
    int j = 0;
    
    for (i = 0; i < N; i++) {      
       gets(frase);
       aux = 0;
       cont = 0;
       j = 0;
        while (frase[j] != '\0') {
            if (frase[j] == ' ') {
                lul[aux].pos = aux;
                lul[aux].palavra[cont] = '\0';
            //    printf("separou palavra %s\n",lul[aux].palavra);
                aux++;
                j++;
                cont = 0;
            }
            else {
                lul[aux].palavra[cont] = frase[j];
                cont++;
                j++;
            }
        }
        lul[aux].palavra[cont] = '\0';
        lul[aux].pos = aux;
        aux++;
        qsort(lul, aux, sizeof(palavra), cmp);
        int k;
        for (k = 0; k < aux; k++) {
           if(k < aux-1) printf("%s ", lul[k].palavra);
           else printf("%s\n",lul[k].palavra);
        }
        
    }
    return 0;
}