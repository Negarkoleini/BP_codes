#include <stdio.h>
#include <math.h>

int main()
{ 
    long long a , b, sum1 , sum2 , counter = 0 , result ,c , v;
   scanf("%lld %lld", &a, &b);
   for(int i = 0 ; a > 0 ; ++i){
      sum1 = ((a % 2) * pow(10 , i)) + sum1;
      a = a / 2;
   }
   for(int i = 0 ; b > 0 ; ++i){
      sum2 = ((b % 2) * pow(10 , i)) + sum2;
      b = b / 2;
   }
   result = sum1 ^ sum2;
   while(result > 0){
       c = result % 10;
       v = c & 1;
       if(v == 1){
           counter++;
       }
       result = result / 10;
   }
   printf("%lld", counter);

    return 0;
}