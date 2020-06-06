#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int backtracking(int M[5][5], int B[5][5], int i, int j, int x, int y){
    B[i][j] = 1;
    int R;
    if ((i == x) && (j == y)){
        return 1;
    }
    if ((i < x)  && (!B[i+1][j]) && (!M[i+1][j])){
        R = backtracking(M, B, i+1, j, x, y);
        if(R){
            return 1;
        }
    }
    if((i > 0) && (!M[i-1][j]) && (!B[i-1][j])){
        R = backtracking(M, B, i-1, j, x, y);
        if(R){
            return 1;
        }
    }
    if((j < x) && (!M[i][j+1]) && (!B[i][j+1])){
        R = backtracking(M, B, i, j + 1, x, y);
        if(R){
            return 1;
        }
    }
    if((j > 0) && (!M[i][j-1]) && (!B[i][j-1])){
        R = backtracking(M, B, i, j - 1, x, y);
        if(R){
            return 1;
        }
    }
    return 0;
}
void main(){
    int matriz[5][5], R[5][5];
    int T = 0, v = 0, i = 0, j = 0;
    scanf("%d", &T);
    while (v < T) {
        memset(matriz, 0, sizeof(matriz));
        memset(R, 0, sizeof(R));
        v ++;
        for (i = 0; i < 5; i++) {
            for(j = 0; j < 5; j++) {
                scanf("%d",&matriz[i][j]);
            }
        }
        if (backtracking(matriz, R , 0, 0 , 4 , 4) == 1) {
            printf("COPS\n");
        }
        else {
            printf("ROBBERS\n");
        }

    }
    
}