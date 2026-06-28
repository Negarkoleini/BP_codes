#include <stdio.h>
#include <math.h>
int main()
{
    int n , i = 0 , t , b , x  , c, k, counter = 1, m , l, h;
    
   scanf("%d", &n);
   m = n;
   l = n;
   t = n;
 while(1){
    i = 0;
    x = 0;
    
    while( m > 0 ){
        m = m / 10;
        i++;
    }
    if(i < 3){
        h = t % 10;
        printf("%d\n", h);
        x = ((t / 10) + l)/ 2;
        printf("%d\n", x);
        break;
    }else{
        
     if(i % 2 == 1){
       x = t / pow(10 , i / 2);
       c = x % 10;
       printf("%d\n",c);
       x = t / (int)pow(10 , (i / 2) + 1);
       k = t % (int)pow(10 , i / 2);
       t = x * (int)pow(10, i / 2) + k;
       m = t;
     }else if(i % 2 == 0){
        x = t / (int)pow(10 , (i / 2) - 1);
        c = x % 10;
        b = (x / 10) % 10;
        l = (c + b) / 2;
        printf("%d\n",l);
        x = t / (int)pow(10 , (i / 2) + 1);
        k = t % (int)pow(10 , (i / 2) - 1);
        t = x * pow(10, (i / 2) - 1) + k;
        m = t;
     }
        
    } 
    
 }
    return 0;
}