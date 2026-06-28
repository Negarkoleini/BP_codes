#include <stdio.h>
#include <math.h>

int sum(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }
int sub(int a, int b) { return a - b; }
float divide(float a, float b) { return a / b; }
int mod(int a, int b) { return a % b; }
int bit_or(int a, int b) { return a | b; }
int bit_xor(int a, int b) { return a ^ b; }
int bit_and(int a, int b) { return a & b; }
int to_base(int a, int b) {
    int r = 0, p = 1;
    while(a) {
        r += (a % b) * p;
        a /= b;
        p *= 10;
    }
    return r;
}
int power(int a, int b) {
    int res = 1;
    for(int i = 0; i < b; i++) res *= a;
    return res;
}

int main() {
    int a, b;
    char c;

    printf("Enter operation (e.g., 5 + 3):\n");
    while(scanf("%d %c %d", &a, &c, &b) == 3) {

        if((c == '/' && b == 0) || (c == '>' && b < 2) ||
           (c != '+' && c != '-' && c != '*' && c != '/' && c != '%' &&
            c != '&' && c != '|' && c != '^' && c != '>')) {
            printf("Invalid operation\n");
            continue;
        }

        switch(c) {
            case '+':
                printf("= %d\n", sum(a, b));
                break;
            case '-':
                printf("= %d\n", sub(a, b));
                break;
            case '*':
                printf("= %d\n", mul(a, b));
                break;
            case '/': {
                float fresult = divide((float)a, (float)b);
                if(fabs(fresult - (int)fresult) > 0.0001)
                    printf("= %.2f\n", fresult);
                else
                    printf("= %.0f\n", fresult);
                break;
            }
            case '%':
                printf("= %d\n", mod(a, b));
                break;
            case '&':
                printf("= %d\n", bit_and(a, b));
                break;
            case '|':
                printf("= %d\n", bit_or(a, b));
                break;
            case '^':
                printf("= %d\n", bit_xor(a, b));
                break;
            case '>':
                printf("= %d\n", to_base(a, b));
                break;
        }
        printf("\nEnter next operation (Ctrl+D to exit):\n");
    }

    return 0;
}