#include <stdio.h>

int main()
{ int a , t ;
 scanf("%d",&a);
 t = a;
   for( int b = a - 1; b > 0 ; --b){
       t = t * b;
   }
   printf("%d", t);
    return 0;
}