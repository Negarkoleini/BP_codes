#include <stdio.h>

void subset(int i, int n, int m) {
    if(i > n) {
        printf("{");
        int first = 1;
        for(int j = 1; j <= n; j++) {
            if(m & (1 << (j - 1))) {
                if(!first) printf(",");
                printf("%d", j);
                first = 0;
            }
        }
        printf("}\n");
        return;
    }
    
    subset(i + 1, n, m | (1 << (i - 1)));
    subset(i + 1, n, m);
}

int main() {
    int n;
    scanf("%d", &n);
    subset(1, n, 0);
    return 0;
}