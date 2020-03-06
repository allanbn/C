#include <stdio.h>

typedef struct {
    int c;
    int m;
    int flag;
}aluno;

int main() {
    int n, cont = 1, media, notm;
    while (scanf("%d", &n) && n > 0) {
        //if (cont > 1) printf("\n");
        media = 0;
        notm = 0;
        printf("Turma %d\n", cont);
        int i;
        aluno alunos[n];
        for (i = 0; i < n; i++) {
            scanf("%d %d", &alunos[i].c, &alunos[i].m);
            alunos[i].flag = 0;
            media += alunos[i].m;
        }
        media /= n;
        for (i = 0; i < n; i++) {
            if (alunos[i].m >= media && alunos[i].m >= notm) {
                alunos[i].flag = 1;
                notm = alunos[i].m;
            }
        }
        for (i = 0; i < n; i++) {
            if (alunos[i].m >= notm && alunos[i].flag == 1) {
                printf("%d ", alunos[i].c);
            }
        }
        printf("\n\n");
        cont++;
    }
    return 0;
}