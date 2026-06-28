#include <stdio.h>

int started = 0;

void print_reverse(int remaining) {
    if (remaining == 0)
        return;

    char c;
    scanf(" %c", &c);

    print_reverse(remaining - 1);

    if (c != '0') {
        printf("%c", c);
        started = 1;
    } else if (started) {
        printf("0");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    print_reverse(n);

    if (!started)
        printf("0");

    return 0;
}