
#include <stdio.h>

int main() { 
    int a;
    scanf("%d", &a);
    
    int b = 0;
    b += a % 10;
    a = a / 10;
    b += a % 10 * 2;
    a = a / 10;
    b += a % 10 * 4;
    a = a / 10;
    b += a % 10 * 8;
    a = a / 10;
    b += a %10 * 16;
    printf("%d", b);
    return 0;
}
