#include <stdio.h>


int rah(int n){
    int i = 0;
    if(n == 0)
    return 1;
    if(n < 0)
    return 0;
    return rah ((n - 1)) + rah((n - 2))+rah((n - 5));
}

int main()
{
   int n , b;
   scanf("%d", &n);
   b = rah(n);
   printf("%d",b);
   
    return 0;
}