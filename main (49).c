#include <stdio.h>

int main()
{ 
    long long a , b, sum1 = 0 , sum2 = 0, counter = 0 , result ,c , v;
   scanf("%lld %lld", &a, &b);
   /*for(int i = 0 ; a > 0 ; ++i){
      sum1 = ((a % 2) * power(10 , i)) + sum1;
      a = a / 2;
   }
   for(int i = 0 ; b > 0 ; ++i){
      sum2 = ((b % 2) * power(10 , i)) + sum2;
      b = b / 2;
   }*/
   result = a ^ b;
      //printf("%lld", result);

   while(result > 0){
       v = result & 1;
       if(v == 1){
           counter++;
       }
       result = result >> 1;
   }
   printf("%lld", counter);

    return 0;
}