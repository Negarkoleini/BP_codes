#include <stdio.h>

int main()
{int n;
   scanf("%d", &n);
   for(int i = 0 , t = n / 2 , y = 1 , x = 0 , u = n - 4; i < n - 1  ; ++i){
       for(int j = 0  ; j < n; ){
          if(i < (n / 2) + 1){
           x = 0;
           while(j < t){
               printf(" ");
               ++j;
           }
           printf("*");
           ++j;
           if(i > 0){
           while(x < 2 * i - 1){
               printf(" ");
               ++j;
               ++x;
            }
           }
           if(i > 0){
           printf("*");
           ++j;
           }
           x = 0;
           while(x < t){
               printf(" ");
               ++j;
               ++x;
           }
           t = t - 1;
            printf("\n");
              
            }
          else {
            x = 0;
            while(x < y){
                printf(" ");
                ++j;
                ++x;
            }
            printf("*");
            ++j;
            x = 0;
            if(i < n ){
            while(x < u){
                printf(" ");
                ++x;
                ++j;
            }  
            }
            if(i < n - 2){
            printf("*");
            ++j;
            }
            while(x < y){
                printf(" ");
                ++j;
                ++x;
            }
            printf("\n");
            x = 0;
            y = y + 1;
            u = u - 2;  
             
              
              
          }

       }
   }
   

    return 0;
}