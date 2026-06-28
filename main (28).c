#include <stdio.h>
#include <math.h>
int main()
{
    int n , i = 0 , t , b , x  , c, k, counter = 1, m , l;

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
        c = t % 10;
        printf("%d\n", c);
        x = ((t / 10) + c)/ 2;
        printf("%d\n", x);
        break;
    }else{
        
     if(i % 2 == 1){
       x = t / pow(10 , i / 2);
       c = x % 10;
       printf("%d\n",c);
       x = t / pow(10 , (i / 2) + 1);
       k = t % (int)pow(10 , i / 2);
       t = x * pow(10, i / 2) + k;
       m = t;
     }else{
        x = t / pow(10 , (i / 2) - 1);
        c = x % 10;
        b = c % 100;
        l = (c + b) / 2;
        printf("%d\n",l);
        x = t / pow(10 , (i / 2) + 1);
        k = t % (int)pow(10 , (i / 2) - 1);
        t = x + k;
        m = t;
     }
        
    } 
    
 }
    return 0;
}