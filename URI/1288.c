#include <stdio.h>
#include <string.h>

int max(int num, int num2){
    if (num>=num2){
        return num;
    }
    else{
        return num2;
    }
}

int main(){

    int n_vezes,i,j,n_projeteis,K,R,up=0;
	int matriz[55][105];
	memset(matriz, 0, sizeof(matriz));

    scanf("%d",&n_vezes);
    while(n_vezes > 0){

        scanf("%d",&n_projeteis);

        int poder[n_projeteis+1];
        int peso[n_projeteis+1];

        for(i=1;i<=n_projeteis;i++){
            scanf("%d %d",&poder[i], &peso[i]); //coleta dados poder e peso dos projeteis.
        }

        scanf("%d %d",&K, &R);//dados de capacidade do canhão e resistência do castelo.

        for(i=1; i<=n_projeteis;i++){
            for(j=1;j<=K;j++){
                if(j >= peso[i]){
                    matriz[i][j] = max(poder[i] + matriz[i-1][j-peso[i]], matriz[i-1][j]);
                }
                else{
                    matriz[i][j] = matriz[i-1][j];
                }
            }
        }
		if(matriz[n_projeteis][K] >= R) printf("Missao completada com sucesso\n");
		else printf("Falha na missao\n");
        n_vezes--;
    }
    return 0;
}