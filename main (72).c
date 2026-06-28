#include <stdio.h>

long long khob(long long n){
   long long res = 0;
   res = (n * (n + 1)) / 2;
   return res;
    }
    
    int shomarande(long long n){
     long long i = 1;
     int counter = 0;
     while( i * i <= n ){
         if(n % i == 0){
             counter = counter + 2;
             ++i;
         }
         else
         ++i;
     }
       return counter; 
    }

int main()
{
    long long c , i = 1, a, counter= 0;
    scanf("%lld",&c);
    while( counter != c){
       a = khob(i);
       counter = shomarande(a);
       ++i;
    }
    printf("%lld", a);
    return 0;
}