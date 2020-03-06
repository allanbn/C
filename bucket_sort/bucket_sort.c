#include "bucket_sort.h"


// recebe um array e a quantidade de elementos
// sendo estes membros da estrutura "balde"
int bubble_sort(long *a, int n) {
    int i, j;
    // realiza uma busca sem atingir o final do array
    // ja que e garantido que um numero sempre sera trocado com um a sua frente
    for (i = 0; i < (n-1); i++) {
        for (j = 0; j < (n-i-1); j++) {
            if (a[j] > a[j+1]) {
                long tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    return 1;
}


// essa funcao recebe como paramento um ponteiro de um array, a quantidade de elementos do array e a quantidade de caixas que voce quer usar
int bucket_sort(long *a, int n, int c) {
    int i, j, k; // variaveis que usarei em repeticoes (for/while) 
    int menor = __INT_MAX__, maior = (-1*__INT_MAX__); // variaveis que guardaram o maior e menor numero dentro da lista
    balde baldes[c]; // criacao dos baldes
    for (i = 0; i < n; i++) { // for para buscar o menor e o maior elemento da lista
        if (a[i] < menor) menor = a[i];
        if (a[i] > maior) maior = a[i];
    }
    int range = maior - menor; // tiro a diferença entre o maior e o menor
    double x = (double) range/c; // variavel de cast para usar a funcao ceil que arredonda para cima um numero do tipo double
    // importante para garantir a quantidade de intervalos com precisao
    int interval = ceil(x); // arredondamento
    for (i = 0; i < c; i++) { // repeticao que inicializa cada balde, zerando os dados guardados e fazendo seu topo ser 0
        baldes[i].topo = 0;
        memset(baldes[i].dados, 0, MAX*sizeof(long));
    }
    for (i = 0; i < c; i++) {
        for (j = 0; j < n; j++) {
            if ((menor <= a[j]) && (a[j] <= (menor + interval))) { // se um numero estiver no intervalo menor < a[j](a == array passado pra funcao) < menor + intervalo
                if (a[j] != -1) { // se o numero nunca foi verificado (marco os verificados como -1)
                    baldes[i].dados[baldes[i].topo++] = a[j]; // adiciono o numero ao seu respectivo balde
                    a[j] = -1; // marquei
                }
            }
        }
        menor += interval; // aumento o menor valor possivel de se obter ja q provavelmente todos ja foram verificados 
    }
    for (i = 0; i < c; i++) {
        bubble_sort(baldes[i].dados, baldes[i].topo); // funcao que ordena cada um dos baldes separadamente
    }
    i = 0;
    // repeticao para jogar todos os elementos em 1 unico array
    while (i < n) {
        for (j = 0; j < c; j++) {
            for (k = 0; k < baldes[j].topo; k++) {
                a[i++] = baldes[j].dados[k];
            }
        }
    }
    return 1;
}