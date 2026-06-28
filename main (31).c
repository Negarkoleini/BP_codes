#include <stdio.h>
#include <math.h>

int main()
{
    long long x, p;
    int b, r, i, res;
    scanf("%lld %d", &x, &b);
    int m = (int)(log(x) / log(b));
    for (i = m; i >= 0; i--)
    {
        p = (long long)(pow(b, i));
        res = x / p;
        printf("%d", res);
        x %= p;
    }
    return 0;
}