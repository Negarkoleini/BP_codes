#include <stdio.h>
int filter(int a ,int b ,int Aks[a][a],int cernel[b][b],int x , int y){
    int sum = 0;
    for(int i = x - (b/2)  , k = 0; i <= x + (b/2) ; ++i , ++k){
      for(int j = y - (b/2)  , l = 0; j <= y + (b/2) ; ++j , ++l){
        sum += Aks[i][j] * cernel[k][l];
      }  
    }
    return sum ;
    //- Aks[x][y] * cernel[b/2][b/2];
     
}
int main(){
int a , b , indexi , indexj;
scanf("%d", &a);
int Aks[a][a];
int out[a][a];
for(int i = 0; i < a ; ++i){
    for(int j = 0; j < a ; ++j){
        scanf("%d", &Aks[i][j]);
    }
}
scanf("%d", &b);
int cernel[b][b];
for(int i = 0; i < b ; ++i){
    for(int j = 0; j < b ; ++j){
        scanf("%d", &cernel[i][j]);
    }
}

for(int indexi = 0 , c = 0 ; indexi < a ; ++indexi){
    for(int indexj = 0; indexj < a  ; ++indexj){
        if(indexi < b/2 || indexi >= a - (b/2) || indexj < b/2 || indexj >= a - (b/2) ){
            out[indexi][indexj] = 0;
        }else{
         c = filter( a, b, Aks , cernel , indexi , indexj );
         if(c > 255)
          out[indexi][indexj] = 255;
          else if(c < 0)
          out[indexi][indexj] = 0;
          else if(c < 255)
          out[indexi][indexj] = c;
        }
    }
}
for(int i = 0 ; i < a ; ++i){
    for(int j = 0 ; j < a ; ++j){
        printf("%d ", out[i][j]);
    }
    printf("\n");
}

    return 0;
}