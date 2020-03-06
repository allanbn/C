#include <stdio.h>

int main() {
    int n, d;
    while (scanf("%d %d", &n, &d) > 0, n && d) {
        char in[n+1];
        char out[n+1];
        scanf("%s", in);
        int t = -1, p = 0;
        while (d > 0) {
            if (t == -1) out[++t] = in[p++];
            if (in[p] > out[t]) {
                t--;
                d--;
                continue;
            }
            out[++t] = in[p++];

            if (p == n) {
                while (d--) t--; 
            } 
        }
        int i;
        for (i = p; i < n; i++) {
            out[++t] = in[i];
        }
        out[t+1] = '\0';
        printf("%s\n",out);
    }
    return 0;
}
