#include <stdio.h>

int main()
{int n , b;
   scanf("%d", &n);
   b = n - 1;
   for(int i = 0 , t = n / 2 , y = 1 , x = 0 , u = n - 4 , j = 0; i < n  ; ++i){
       for(int j = 0  ; j < n ; ){
          if(i < (n / 2) + 1){
           x = 1;
           while(j < t){
               printf(" ");
               ++j;
           }
           printf("*");
           ++j;
           if(i > 0 && i < n  / 2){
           while(x < i ){
               printf(" ");
               ++j;
               ++x;
            }
               
           }
            else{
                x = 0;
             while(x < i - 1){
             printf("*");
             ++j;
             ++x;
            }
            }
            x = 0;
            while(x < i){
              printf("*");  
              ++j;
              ++x;
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
            else{
            x = 0;
            while(x < y){
                printf(" ");
                ++j;
                ++x;
            }
            printf("*");
            ++j;
            x = 0;
            if(i < n - 1 ){
            while(x < (u / 2) + 1){
                printf("*");
                ++x;
                ++j;
            } 
            x = 0;
            while(x < (u / 2)  ){
               printf(" ");
               ++j;
               ++x;
            }
            }
            if(i < n - 1){
            printf("*");
            ++j;
            }
            x = 0;
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