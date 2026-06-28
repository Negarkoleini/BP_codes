#include <stdio.h>

int Aval(int n){
    int count = 0;
    for(int i = 2 ; i < n / 2; ++i ){
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

int main()
{ 
    int a , b = 3, t2 , t1, t;
    scanf("%d",&a);
    while(b <= a / 2){
        t = a - b;
        if( Aval(t) == 1 && Aval(b) == 1){
            t1 = b;
            t2 = t;
        }
        ++b;
    }
    printf("%d  %d", t1 , t2);

    return 0;
}