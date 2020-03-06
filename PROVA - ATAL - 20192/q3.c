#include <stdio.h>
#include <string.h>

#define MAX 501

const char down = 'V';
const char up = 'A';
const char right = '>';
const char left = '<';

int n;

int RESOLVA(char t[MAX][MAX], int taux[MAX][MAX], int x, int y);
int backtracking(char t[MAX][MAX], int taux[MAX][MAX], int x, int y);

int main() {
    scanf("%d", &n);
    char t[MAX][MAX];
    int taux[MAX][MAX];
    memset(t, 0, sizeof(t));
    memset(taux, 0, sizeof(taux));
    int x, y;
    scanf("%d %d", &x, &y);
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%s", t[i]);
    }
    if (backtracking(t, taux, x, y)) printf("SIM\n");
    else printf("NAO\n");
    return 0;
}


int RESOLVA(char t[MAX][MAX], int taux[MAX][MAX], int x, int y) {
    // SELO HENRIQUE CUNHA DE APROVACAO
    if ((t[x][y] == down) && (x < n) && (!taux[x+1][y])) {
        return backtracking(t, taux, x+1, y);
    }
    else if ((t[x][y] == up) && (x > 0) && (!taux[x-1][y])) {
        return backtracking(t, taux, x-1, y);
    }
    else if ((t[x][y] == right) && (y < n) && (!taux[x][y+1])) {
        return backtracking(t, taux, x, y+1);
    }
    else {
        if ((t[x][y] == left) && (y > 0) && (!taux[x][y-1])) {
            return backtracking(t, taux, x, y-1);
        }
    }
    return 0;
}

int backtracking(char t[MAX][MAX], int taux[MAX][MAX], int x, int y) {
    taux[x][y] = 1;
    if (x == 0) {
        if ((t[x][y] == up)) return 1;
        else {
            if (RESOLVA(t, taux, x, y)) return 1;
        }
    }
    else if (x == (n-1)) {
        if (t[x][y] == down) return 1;
        else {
            if (RESOLVA(t, taux, x, y)) return 1;
        }
    }
    else if (y == 0) {
        if (t[x][y] == left) return 1;
        else {
            if (RESOLVA(t, taux, x, y)) return 1;
        }
    }
    else { 
        if (y == (n-1)) {
            if (t[x][y] == right) return 1;
            else {
                if (RESOLVA(t, taux, x, y)) return 1;
            }
        }
    }
    return 0;
}