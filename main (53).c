#include <stdio.h>

int Aval(int n){
    int count = 0;
    for(int i = 2 ; i <= n / 2; ++i ){
        if(n % i == 0){
            count++;
            break;
        }
    }
    if(count != 0)
    return 0;
    else
    return 1;
}
int count(int n , int k){
    int b = 0 , i = -1;
    for( ; b == 0 ; ++i){
        b = n % k;
        n = n / k;
    }
    return i;
}

int main()
{ 
    int a , b = 2, t2 , t1, t, j = 0, c = 0 , counter = 0, l = 0;
    scanf("%d",&a);
    for(int i = 0;  b * b <= a; ++b){
        c = a % b;
        if(c == 0){
            if(Aval(b) == 1){
                counter = count(a , b);
                /*while(j < counter){
                    a = a / b;
                    ++j;
                }*/
                if(l == 0){
                 if(counter > 1){
                  printf("%d^%d",b , counter);
                   ++l;}
                   else{
                    printf("%d",b);
                    ++l;
                   }
                    
                }
                else{
                 if(counter > 1){
                  printf("*%d^%d",b , counter);
                   ++l;}
                   else{
                    printf("*%d",b);
                    ++l;
                   }}
            }
        }
    }

    return 0;
}