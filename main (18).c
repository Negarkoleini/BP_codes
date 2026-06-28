#include <stdio.h>

int main()
{ 
    long long m, n, t, j, p , k;
    scanf("%lld %lld", &m , &n);
    t = n;
    p = m;
    if( n > m){
        n = m;
        m = t;
    }
     j = m % n;
    if( j == 1 ){
        n = j;
        printf("%lld ", n);
    }else if( j == 0){
    printf("%lld ", n);
    
    }else if(j != 0 , j != 1){
      for( ; j != 0 && j != 1 ; m = n , n = j){
        j = m % n;
          
        }
    
      if( j == 0){
       n = m;
        printf("%lld ", m);
       }else if(j == 1){
           n = j;
          printf("%lld ", n);
        }
    }
    k = (p * t)  / n;
    printf("%lld", k);
    
    return 0;
}