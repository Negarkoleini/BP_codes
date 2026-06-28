#include <stdio.h>

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
         b = c * (i - j + 1)/(j );
         c = b;
         printf("%d ", b);
         ++j;
            }
      }
      printf("\n");
  }

    return 0;
}