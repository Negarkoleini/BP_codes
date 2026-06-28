#include <stdio.h>

int main()
{ 
    int n , i = 0 , j = 1 , x = 0 , p , t = 1 ;
    scanf("%d",&n);
    p = n;
    
 while(j < n / 2 + 2){
   while(i <= p / 2 ){
     printf(" ");
     i++;
   }
    while(x < t){
    printf("*");
    ++x;
    }
    i = 0;
    while(i < p - 1){
     printf(" ");
     ++i;
    }
    x = 0;
    while(x < t){
    printf("*");
    ++x;
    }
    i = 0;
     while(i < p / 2){
     printf(" ");
     i++;
    }
    ++j;
    p = p - 2;
    t = t + 2;
    printf("\n");
    i = 0;
    x = 0;
    }
    //2
   j = 1;
   t = 2;
   x = 0;
   i = 0;
   p = n - 2;
 while(j <= n / 2 ){
   while(i <= t / 2 ){
     printf(" ");
     i++;
   }
    while(x < p){
    printf("*");
    ++x;
    }
    i = 0;
    while(i < t ){
     printf(" ");
     ++i;
    }
    x = 0;
    while(x < p){
    printf("*");
    ++x;
    }
    i = 0;
     while(i < t / 2 ){
     printf(" ");
     i++;
    }
    ++j;
    p = p - 2;
    t = t + 2;
    printf("\n");
    i = 0;
    x = 0;
    
    }
return 0;
}