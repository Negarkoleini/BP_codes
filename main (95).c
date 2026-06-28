#include <stdio.h>

int a = 0;

void print_reverse(int remaining) {
    if (remaining == 0)
        return;

    char c;
    scanf(" %c", &c);

    print_reverse(remaining - 1);

    if (c != '0') {
        printf("%c", c);
        a = 1;
    } else if (a) {
        printf("0");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    print_reverse(n);

    if (!a)
        printf("0");

    return 0;
}