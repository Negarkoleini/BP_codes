#include <stdio.h>

int main()
{ long long a , t , b;
 scanf("%lld",&a);
 t = a;
 b = a - 1;
   for( ; b > 0 ; --b){
       t = t * b;
   }
   printf("%lld", t);
    return 0;
}