#include <stdio.h>

int khob(int n){
   int i = n , res = 0;
   if(i == 0)
   return 0;
   res = khob( n - 1);
   return n + res;
    }
    
    int shomarande(int n){
     int i = 1;
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
    int c , i = 1, a, counter= 0;
    scanf("%d",&c);
    while( counter != c){
       a = khob(i);
       counter = shomarande(a);
       ++i;
    }
    printf("%d", a);
    return 0;
}