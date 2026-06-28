#include <stdio.h>

void subset(int i, int n, int mask) {
    if (i > n) {
        printf("{");
        for (int j = 1; j <= n; j++) {
            if (mask & (1 << (j - 1))) {
                printf(" %d", j);
            }
        }
        printf(" }\n");
        return;
    }

    subset(i + 1, n, mask | (1 << (i - 1)));
    subset(i + 1, n, mask);
}

int main() {
    int n;
    scanf("%d", &n);
    subset(1, n, 0);
    return 0;
}