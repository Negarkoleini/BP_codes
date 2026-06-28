#include <stdio.h>
int khayam(int a , int b , int c){
    int v ;
    v = c * (a - b + 1)/(b );
    return v;
}

int main()
{
 int i = 0 , j = 0 , n;
  scanf("%d", &n);
  for(int i = 0 ; i < n  ; ++i){
      for( int j = 0 , c = 1 , b = 0; j < i + 1  ; ){
          if( j == 0 || j == i ){
             printf("1 "); 
             ++j;
          }else{
         b = khayam( i , j , c);
         c = b;
         printf("%d ", b);
         ++j;
            }
      }
      printf("\n");
  }

    return 0;
}