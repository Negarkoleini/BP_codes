#include <stdio.h>

int kashy(int n){
    if(n == 0)
    return 1;
    if(n < 0)
    return 0;
    return kashy((n - 2)) + kashy((n - 1));
}

int main()
{ 
    int n , c = 0;
   scanf("%d", &n);
   c = kashy(n);
   printf("%d", c);
    return 0;
}