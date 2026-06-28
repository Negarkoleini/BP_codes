#include <stdio.h>

int getNumber() {
    int x = 0, c;
    c = getchar();
    while (c == ' ' || c == '\n') c = getchar();
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    ungetc(c, stdin);
    return x;
}

int solve() {
    int c, sum = 0, hasSet = 0;

    do c = getchar(); while (c != '{');

    while (1) {
        c = getchar();

        if (c == ' '  c == '\n'  c == ',')
            continue;

        if (c == '{') {
            ungetc(c, stdin);
            int val = solve();
            printf("%d\n", val);
            sum += val;
            hasSet = 1;
        }

        else if (c >= '0' && c <= '9') {
            ungetc(c, stdin);
            int num = getNumber();
            sum += num;
        }

        else if (c == '}')
            return sum;
    }
}

int main() {
    printf("%d\n", solve());
    return 0;
}