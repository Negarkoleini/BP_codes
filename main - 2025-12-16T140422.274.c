#include <stdio.h>
int copare(int aray1[],int aray2[], int n){
    int i = 0 , counter = 0;
    for( ; i < n ; ++i){
        if (aray1[i] == aray2[i])
        ++counter;
    }
    return counter;
}
void barande(int max , int k , int m , int s){
    if(k == max)
    printf("keyvoon\n");
    if(m == max)
    printf("nezam\n");
    if(s == max)
    printf("shir farhad");
}
int main()
{  
    int k = 0 , m = 0 , s = 0 , max = 0 , n;
    scanf("%d", &n);
   int K[n], N[n], S[n] , Aray[n];
   for(int i = 0;i < n ; ++i){
       if(i % 6 == 0 || i % 6 == 1)
       K[i]=3;
       if(i % 6 == 2 || i % 6 == 3)
       K[i]=1;
       if(i % 6 == 4 || i % 6 == 5)
       K[i]=2;
   }
   for(int i = 0;i < n ; ++i){
       N[i]= i % 3 + 1;
   }
   for(int i = 0;i < n ; ++i){
       if(i % 4 == 0 || i % 4 == 2)
       S[i]=2;
       if(i % 4 == 1)
       S[i]=1;
       if(i % 4 == 3)
       S[i]=3;
   }
   for(int i = 0;i < n ; ++i){
     scanf("%1d", &Aray[i]);
   }
   k = copare(K , Aray , n);
   m = copare(N , Aray , n);
   s = copare(S , Aray , n);
   max = m;
   if(k > m)
   max = k;
   if(s > max)
   max = s;
   printf("%d\n", max);
   barande(max , k, m , s);
   
   
    return 0;
}