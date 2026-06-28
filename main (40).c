#include <stdio.h>

int main()
{ long long n , i = 0 , t, sum = 0;
    scanf("%lld", &n);
    t = n;
    sum = n;
 while(1){
    while(t > 0){
         t = t / 10;
         ++i;
     }
     if(i == 1){
         
         break;
     }
     sum = 0;
    while( n > 0 ){
        sum = sum + n % 10;
        n = n / 10;
    }
    t = sum;
    i = 0;
    n = sum;
 }
 printf("%d", sum);

    return 0;
}