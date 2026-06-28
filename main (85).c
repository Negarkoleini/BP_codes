#include <stdio.h>

int shomarande(long long n){
     long long i = 1;
     int counter = 0;
     while( i * i <= n ){
         if(n % i == 0 ){
             if( i * i == n){
                 ++counter;
                 ++i;
             }else{
             counter = counter + 2;
             ++i;}
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
    while( counter < c){
       a = (i * (i+1))/2;
       counter = shomarande(a);
       ++i;
    }
    printf("%lld", a);
    return 0;
}