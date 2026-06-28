#include <stdio.h>
int main(){
  int zarfiat , istgah , tedad , maghsad , mosafer = 0, b = 0 , sum = 0 , limit;
     scanf("%d", &zarfiat);
     scanf("%d", &istgah);
     int khoroj[istgah];
     for(int i = 0; i < istgah ; i++){
      khoroj[i] = 0;}
    for(int i = 0 ; i < istgah - 1; ++i){
     mosafer = mosafer - khoroj[i];
      scanf("%d",&tedad);
      int entekhab[tedad];
        for(int j = 0 ; j < tedad ; ++j){
          scanf("%d",&maghsad);
          entekhab[j] = maghsad;
        }
        for(int k = 0 ; k < tedad ; ++k){
           for(int j = k + 1 ; j < tedad ; ++j){
             if(entekhab[j] > entekhab[k]){
                int t = entekhab[k];
                entekhab[k] = entekhab[j];
                entekhab[j] = t;
               }
            }
         }
        b = zarfiat - mosafer;
         limit = (b < tedad) ? b : tedad;
        for(int j = 0 , c = 0 ; j < limit; ++j){
            c = entekhab[j];
            ++khoroj[c];
            ++mosafer;
        }  
      sum += mosafer; 
    
    }
printf("%d", sum);

    return 0 ;
}