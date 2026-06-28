#include <stdio.h>
#include <math.h>

int sum(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }
int min(int a, int b) { return a - b; }
float dive(float a, float b) { return a / b; }
int bagh(int a, int b) { return a % b; }
int j(int a, int b) { return a | b; }
int k(int a, int b) { return a ^ b; }
int i(int a, int b) { return a & b; }
int mabna(int a, int b) {
    int r = 0, p = 1;
    while(a) {
        r += (a % b) * p;
        a /= b;
        p *= 10;
    }
    return r;
}

int main() {
    int a, b, flag = 1, answer = 0;
    float fanswer;
    char c;

    while(flag) {
        scanf("%d %c %d", &a, &c, &b);

        if(c == '/' && b == 0) {
            printf("Invalid operation");
            flag = 0;
        }
        if(c == '>' && b < 2) {
            printf("Invalid operation");
            flag = 0;
        }
        if(c != '-' && c != '+' && c != '/' && c != '&' && c != '|' && c != '^' && c != '>' && c != '*') {
            printf("Invalid operation");
            flag = 0;
        }

        if(flag) {
            switch(c) {
                case '+':
                    answer = sum(a, b);
                    printf("= %d\n", answer);
                    break;
                case '*':
                    answer = mul(a, b);
                    printf("= %d\n", answer);
                    break;
                case '-':
                    answer = min(a, b);
                    printf("= %d\n", answer);
                    break;
                case '/':
                    fanswer = dive((float)a, (float)b);
                    if(fabs(fanswer - (int)fanswer) > 0.0001)
                        printf("= %.2f\n", fanswer);
                    else
                        printf("= %.0f\n", fanswer);
                    break;
                case '%':
                    answer = bagh(a, b);
                    printf("= %d\n", answer);
                    break;
                case '|':
                    answer = j(a, b);
                    printf("= %d\n", answer);
                    break;
                case '^':
                    answer = k(a, b);
                    printf("= %d\n", answer);
                    break;
                case '&':
                    answer = i(a, b);
                    printf("= %d\n", answer);
                    break;
                case '>':
                    answer = mabna(a, b);
                    printf("= %d\n", answer);
                    break;
            }
        }
    }
    return 0;
}