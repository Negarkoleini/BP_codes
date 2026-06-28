#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, t, b, x, c, k, m, l;

    scanf("%d", &n);
    t = n;

    while (1) {
        m = t;
        i = 0;
        while (m > 0) {
            m /= 10;
            i++;
        }

        if (i == 1) break;

        if (i % 2 == 1) {
            x = t / 1;
            c = (t / 1) / (int)pow(10, i / 2) % 10;
            printf("%d\n", c);
            int left = t / (int)pow(10, (i / 2) + 1);
            int right = t % (int)pow(10, i / 2);
            t = left * (int)pow(10, i / 2) + right;
        } else {
            int mid1 = (t / (int)pow(10, (i / 2) - 1)) % 10;
            int mid2 = (t / (int)pow(10, i / 2)) % 10;
            l = (mid1 + mid2) / 2;
            printf("%d\n", l);
            int left = t / (int)pow(10, (i / 2) + 1);
            int right = t % (int)pow(10, (i / 2) - 1);
            t = left * (int)pow(10, (i / 2) - 1) + right;
            t = t * 10 + l;
        }
    }

    return 0;
}