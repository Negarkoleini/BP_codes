#include <stdio.h>

int Aval(int a){
    int i = 2;
    for( ; i * i <= a; ++i){
    if(a % i == 0 )
    return 1;
    }
    return 0;
}
void ramz(int a , int ragham){
    if(ragham == 0){
        printf("%d\n", a);
        return;
    }
    if(Aval(a) == 1)
    return;
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