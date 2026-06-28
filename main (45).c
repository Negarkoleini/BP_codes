#include <stdio.h>

int main()
{
    int b;
    char a;
   scanf("%c", &a);  
   scanf("%d", &b);
   if(a =='s'){
       
       for(int i = 0 ; i < b ; ++i){
           for(int j = 0 ; j < b ; ++j){
               printf("*");
           }
           printf("\n");
       }
       
   }
   else if(a == 't'){
           
       for(int i = 1 , t = b; i <= b ; ++i){
           for(int j = 0 ,x = 0; j < (2 * b) - 1 ; ){
               while(x < t -1){
               printf(" ");
                   ++x;
                   ++j;
               }
               x = 0;
              while(x < (2 * i) - 1){
              printf("*");
              ++x;
              ++j;
                }
              x = 0;
              while(x < t -1){
               printf(" ");
                   ++x;
                   ++j;
               }
             printf("\n"); 
             --t;
               
           }
       
         }    
   }
   else if(a == 'd'){
          for(int i = 1 , t = b; i <= b ; ++i){
           for(int j = 0 ,x = 0; j < (2 * b) - 1 ; ){
               while(x < t -1){
               printf(" ");
                   ++x;
                   ++j;
               }
               x = 0;
              while(x < (2 * i) - 1){
              printf("*");
              ++x;
              ++j;
                }
              x = 0;
              while(x < t -1){
               printf(" ");
                   ++x;
                   ++j;
               }
             printf("\n"); 
             --t;
               
           }
       
         } 
    
    for(int i = 1  , v = 2 * b - 3; i < b ; ++i , v = v - 2) {
        for(int  j = 0 , x = 0; j < (b / 2) * 2 + 1; ){
            while(x < i){
               printf(" ");
                   ++x;
                   ++j; 
            }
            x =0;
            while(x < v ){
            printf("*");
              ++x;
              ++j;    
            }
            x = 0;
            while(x < i){
               printf(" ");
                   ++x;
                   ++j; 
            }
            x =0;
            printf("\n");

        }
        
        
        
        
        
        
    }    

   }

    return 0;
}