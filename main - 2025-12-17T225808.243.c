#include <stdio.h>

int majmoe(int n){
    int sum = 0;
    if(n <= 1)
    return 1;
    for(int k = 0 ; k < n ; ++k){
    sum += majmoe(k) * majmoe( n - k - 1);
    }
    return sum;
}

int main()
{
   int n , b = 0 ;
   scanf("%d", &n);
   b = majmoe(n - 2);
   printf("%d", b);
 
    return 0;
}