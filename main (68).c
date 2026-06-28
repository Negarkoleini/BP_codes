#include <stdio.h>

long long khob(long long n){
   long long i = n , res = 0;
   if(i == 0)
   return 0;
   res = khob( n - 1);
   return n + res;
    }
    
    int shomarande(long long n){
     long long i = 1;
     int counter = 1;
     while( i <= n / 2){
         if(n % i == 0){
             ++counter;
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
    scanf("%d",&c);
    while( counter != c){
       a = khob(i);
       counter = shomarande(a);
       ++i;
    }
    printf("%lld", a);
    return 0;
}