#include <stdio.h>

int main()
{   int n , i = 0 ;
    float  num , Largest = 0, Smallest = 0 , sum = 0 , Average = 0;
    scanf("%d", &n);
 while(i < n){
     scanf("%f", &num);

     if (i == 0){
         Smallest = num;
         Largest = num;
     }
     if( num < Smallest){
         Smallest = num;
     }
     if( num > Largest){
         Largest = num;
     }
     sum = sum + num;
     ++i;
 }
 Average = sum / n;
 printf("Largest: %2.2f\nSmallest: %2.2f\nAverage: %2.2f",Largest, Smallest, Average );

    return 0;
}