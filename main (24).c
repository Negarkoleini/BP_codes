#include <stdio.h>

int main()
{
    int  b , i = -1 , j = -1, counter = 1 , p = 0 , n = -1 , flag = 1;
    char a , c;
    scanf("%c" , &c);
    while(flag){
     scanf("%c" , &a);
     if(a == '^'){
         break;
     }
     scanf(" %d " , &b);
    if( a == c){
         if (counter == 1 ){
             i = b;
             j = b;
             p = 1;
             ++counter;
            }
            else if( b == j + 1){
                j = b;
                p++;
                counter++;
            }
            else if( b != (j + 1)){
                flag = 0;
            }
         }else if(a != c){
             n++;
         }
     }
     printf("%d %d\n%d %d",p , n , i , j);
     
    return 0;
}