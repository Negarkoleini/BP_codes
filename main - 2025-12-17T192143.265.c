#include <stdio.h>

int Aval(int a){
    int i = 2;
    for( ; i * i <= a; ++i){
    if(a % i == 0 )
    return 1;
    }
    return 0;
}
int jan(int a){
    if(a == 0)
    return 1;
    if(Aval(a) == 1)
    return 0;
    return jan(a / 10);
}
void ramz(int a , int ragham){
    if(ragham == 0){
        if(jan(a) == 1)
        printf("%d\n", a);
        return;
    }
    for(int i = 0 ; i <= 9 ; ++i){
        ramz(a * 10 + i , ragham - 1);
    }
}
int main()
{
  int n;
  scanf("%d", &n);
  ramz(2 , n - 1);
  ramz(3 , n - 1);
  ramz(5 , n - 1);
  ramz(7 , n - 1);
    return 0;
}