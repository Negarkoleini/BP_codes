#include <stdio.h>

int main()
{  int i = 0 , j = 0 , n ,b = 0;
   scanf("%d",&n);
   int H[101];
    while(j < n ){
        scanf("%d",&H[i]);
        ++j;
        ++i;
    }
    for( int counter = 0  , i = 0 , c = H[0]; counter < n ; ++counter , ++i ){
        if(H[i] > c){
            b = i;
            c = H[i];
        }
    }
    printf("%d", b + 1);
  

    return 0;
}