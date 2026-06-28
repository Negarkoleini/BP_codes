#include <stdio.h>

int main()
{ int n;
    scanf("%d" , &n);

    for( int i = 1 ; i <= n ; i++){
        for( int j = 1 ; j <= n ; j++){
           if( i <= n && j <= n){
                printf("%d ", i*j);
            }
            if(j == n){
                printf("\n");
            }
        }
    }
   return 0;
}