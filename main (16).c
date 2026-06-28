#include <stdio.h>

int main()
{ 
    long long m, n, t, j, p , k;
    scanf("%d %d", &m , &n);
    t = n;
    p = m;
    if( n > m){
        n = m;
        m = t;
    }
     j = m % n;
    if( j == 1){
        n = j;
        printf("%d ", n);
    }else{
      for( ; j != 0 && j != 1 ; m = n , n = j){
        j = m % n;
          
        }
    
      if( j == 0){
       n = m;
        printf("%d ", m);
       }else if(j == 1){
           n = j;
          printf("%d ", n);
        }
    }
    k = (p * t)  / n;
    printf("%d", k);
    
    return 0;
}