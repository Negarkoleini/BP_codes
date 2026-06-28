#include <stdio.h>
#include <math.h>
int main()
{
 long long a , b , k = 0 ,j;
 long long i = 0 , m = 1;
scanf("%lld", &a);
scanf("%lld", &b);
int sum = 0;
 int s = a;
 int v = b;
    //while(s > 0){
     //m = s / v;
     // s = m;
     // ++i;
    //}
    m = 1;
    j = 0;
     while(a > 0){
        m = a / b;
        k = a % b;
        a = m;
        sum = pow(10 , j) * k + sum;
        ++j;
    }
    printf("%lld", sum);
    
    return 0;
}  